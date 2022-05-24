/*
	SPDX-FileCopyrightText: 2008-2010 Graeme Gott <graeme@gottcode.org>

	SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef FOCUSWRITER_COLOR_BUTTON_H
#define FOCUSWRITER_COLOR_BUTTON_H

#include <QColor>
#include <QPushButton>

class ColorButton : public QPushButton
{
	Q_OBJECT

public:
	explicit ColorButton(QWidget* parent = 0);

	QColor color() const;
	QString toString() const;

signals:
	void changed(const QColor& color);

public slots:
	void setColor(const QColor& color);

private slots:
	void onClicked();

private:
	QColor m_color;
};

inline QColor ColorButton::color() const
{
	return m_color;
}

#endif // FOCUSWRITER_COLOR_BUTTON_H
