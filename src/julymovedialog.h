// Created By July IGHOR

#ifndef JULYMOVEDIALOG_H
#define JULYMOVEDIALOG_H

#include <QWidget>
#include "ui_julymovedialog.h"
#include "julyscandir.h"
#include <QMessageBox>

class JulyMoveDialog : public QWidget
{
	Q_OBJECT

public:
	bool wasDropboxStarted;
	QString copyErrorText;
	QString dropBoxAppFile;
	int replaceState;
	QStringList t_dirsList;
	QString lastOldDir;
	QString lastNewDir;
	QString startingText;
	QString processingMove;
	QString replaceAtempt;
	QString copyFinishedText;
	JulyScanDir *scanDir;
	void moveFolder(QString,QString);
	JulyMoveDialog(QWidget *parent = 0);
	~JulyMoveDialog();

private:
	Ui::JulyMoveDialogClass ui;

private slots:
void dirChanged(QString);      // �� ����� ������ ���������� ������ ����� ��������� ����������
void fileChanged(QString);     // �� ����� ������ ���������� ������ ����� �������� �����
void loadedList(QStringList);  // �� ���������� ������ ���������� ������ �������� ������
void errorHeppend(int);        // ���� ��������� ������ �� ����������: 0 ���� �� ������� ������� ������
                               // � 1 ���� ������� ����� ������ �� ����������
public slots:
signals:
};

#endif // JULYMOVEDIALOG_H

