#pragma once

#include <QString>
#include <QDebug>

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
}
