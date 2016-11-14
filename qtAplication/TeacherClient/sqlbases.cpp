#include "sqlbases.h"

SqlBases::SqlBases()
{
    //list = new QList<QVariant>();
}

bool SqlBases::addSubject(_Subject *subject)
{
   // query.exec("insert");
    QSqlQuery query;
    qDebug()<<"insert into Subject (TITLE,INTRODUCE,PRECODE,SUFCODE,CHAPTERID) values(\'"+subject->title+"\',\'"+subject->introduce+"\',\'"+subject->precode+"\',\'"+subject->sufcode+"\',"+subject->chapterid+')';
    if(query.exec("insert into Subject (TITLE,INTRODUCE,PRECODE,SUFCODE,CHAPTERID) values(\'"+subject->title.toUtf8()+"\',\'"+subject->introduce+"\',\'"+subject->precode+"\',\'"+subject->sufcode+"\',"+subject->chapterid+')'))
    //if(query.exec("insert into Subject (TITLE,CHAPTERID) values(\'"+subject->title.toStdString()+"\',"+subject->chapterid+')'))
    {
        qDebug()<<"addSubject success";

        //query.exec("select TITLE from Subject");
        //query.next();
        //qDebug()<<query.value(0).toString();
        return true;
    }
    else qDebug()<<"Error addSubject: "<<query.lastError().text();
    return false;
}

bool SqlBases::addSubjectCase(_Case* cases)
{
    QSqlQuery query;
    query.exec("insert into Scase (INPUT,OUTPUT,SUBJECTID) values("+cases->input+','+cases->output
                +','+cases->subjectid+')');
    if(query.exec("insert into Scase (INPUT,OUTPUT,SUBJECTID) values("+cases->input+','+cases->output
                  +','+cases->subjectid+')'))
    {
        qDebug()<<"addSubjectCase success";
        return true;
    }
    else qDebug()<<"Error addSubjectCase: "<<query.lastError().text();
    return false;
}

bool SqlBases::deleteSubject(QString subjectid)
{
    QSqlQuery query;
    if(query.exec("delete from Scase where SUBJECTID = "+subjectid))
    {
        qDebug()<<"1/2:delete case record success";
    }
    else {
        qDebug()<<"Error 1/2:"<<query.lastError().text();
        return false;
    }

    if(query.exec("delete from Subject where ID = "+subjectid))
    {
        qDebug()<<"2/2:delete subject record success";
        return true;
    }
    else qDebug()<<"Error 2/2:"<<query.lastError().text();
    return false;
}

bool SqlBases::deleteSubjectCase(QString caseid)
{
    QSqlQuery query;
    if(query.exec("delete from Scase where ID = "+caseid))
    {
        qDebug()<<"delete case success";
        return true;
    }
    else qDebug()<<"Error deleteSubjectCase: "<<query.lastError().text();
    return false;
}

QString SqlBases::pushCode(_Code *code)
{
    QSqlQuery query;
    if(query.exec("insert into History (SUBJECTID,DATE,TIME,CODE) values("+code->subjectid+",curdate(),curtime())"))
    {
        qDebug()<<"pushCode success";
    }
    else qDebug()<<"Error pushCode: "<<query.lastError().text();

    if(query.exec("select ID top 1 from History order by ID DESC"))
    {
        qDebug()<<"pushCode Res success";
        return query.value(0).toString();
    }
    else qDebug()<<"Error pushcode Res: "<<query.lastError().text();
    return NULL;
}

QString SqlBases::reCompileRes(QString compileID)
{
    QSqlQuery query;
    if(query.exec("select from History where ID = "+compileID))
    {
        qDebug()<<"queryCompileRes success";
        return query.value(0).toString();
    }
    else qDebug()<<"Error queryCompileRes :"<<query.lastError().text();
    return NULL;
}















