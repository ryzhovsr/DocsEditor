#pragma once

#include <QString>
#include <QDebug>
#include <codecvt>

namespace Utils
{
    // Функция для извлечения имени файла из полного пути
    inline static QString extractFileName(const QString& filePath)
    {
        int i = filePath.length() - 1;

        // Идем с конца строки, чтобы найти последний слеш
        while (i >= 0)
        {
            if (filePath.at(i) == '/' || filePath.at(i) == '\\')
            {
                break;
            }

            --i;
        }

        // Возвращаем всё, что после последнего слеша
        return filePath.mid(i + 1);
    }

    static void removeSpireDocWarning(std::wstring& text)
    {
        // Строка, которую нужно удалить
        std::wstring warning = L"Evaluation Warning: The document was created with Spire.Doc for CPP.\r\n";

        // Поиск подстроки и её удаление, если найдена
        size_t pos = text.find(warning);

        if (pos != std::wstring::npos)
        {
            text.erase(pos, warning.length());
        }
    }

    static std::vector<std::string> splitByKeywords(const std::string& text) {
        // Ключевые слова
        std::vector<std::string> keywords = {"Введение", "Глава 1.", "Глава 2.", "Глава 3.", "Заключение"};

        // Результирующий вектор строк
        std::vector<std::string> result(5);

        // Позиция начала поиска
        size_t startPos = 0;

        // Проходим по ключевым словам
        for (size_t i = 0; i < keywords.size() - 1; ++i) {
            // Находим ключевое слово
            size_t keywordPos = text.find(keywords[i], startPos);

            // Проверяем, что ключевое слово найдено
            if (keywordPos != std::string::npos) {
                // Находим следующее ключевое слово
                size_t nextKeywordPos = text.find(keywords[i + 1], keywordPos + keywords[i].length());

                // Если найдено следующее ключевое слово
                if (nextKeywordPos != std::string::npos) {
                    // Извлекаем текст между текущим и следующим ключевым словом
                    result[i] = text.substr(keywordPos + keywords[i].length(), nextKeywordPos - (keywordPos + keywords[i].length()));

                    // Устанавливаем позицию для следующего поиска
                    startPos = nextKeywordPos;
                }
            }
        }

        // Добавляем текст после "Заключения"
        size_t conclusionPos = text.find(keywords.back(), startPos);
        if (conclusionPos != std::string::npos) {
            result.back() = text.substr(conclusionPos + keywords.back().length());
        }

        return result;
    }

    static std::wstring s2ws(const std::string& str)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;

        return converterX.from_bytes(str);
    }

    static std::string ws2s(const std::wstring& wstr)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;

        return converterX.to_bytes(wstr);
    }
}
