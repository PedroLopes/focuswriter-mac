/***********************************************************************
 *
 * Copyright (C) 2021 Graeme Gott <graeme@gottcode.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#ifndef HTML_WRITER_H
#define HTML_WRITER_H

#include <QCoreApplication>
#include <QXmlStreamWriter>
class QTextDocument;

class HtmlWriter
{
	Q_DECLARE_TR_FUNCTIONS(HtmlWriter)

public:
	QString errorString() const
	{
		return m_error;
	}

	bool write(QIODevice* device, QTextDocument* document);

private:
	QXmlStreamWriter m_xml;
	QString m_error;
};

#endif
