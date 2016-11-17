#ifndef SQLBASES_H
#define SQLBASES_H

#include "QtSql"
#include "qlist.h"
#include "bases.h"


class SqlBases
{
public:
    SqlBases();
    static bool addSubject(_Subject* subject);
    static bool addSubjectCase(_Case* cases);

    static bool deleteSubject(QString subjectid);
    static bool deleteSubjectCase(QString caseid);

    static QList<QVariant> reChapter();
    static bool reSubject(QList<SubjectList*> *list);
    static bool reSubjectCase(QString subjectid, QList<_Case *> *list);

    static QString pushCode(_Code* code);
    static QString reCompileRes(QString compileID);


private:
    //static QSqlQuery query;
    static QList<QVariant> llist;

};

#endif // SQLBASES_H
