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

    static void reSubject();
    static void reSubjectCase(QString subjectid);

    static QString pushCode(_Code* code);
    static QString reCompileRes(QString compileID);

    QList<QVariant> *list;
private:
    //static QSqlQuery query;

};

#endif // SQLBASES_H
