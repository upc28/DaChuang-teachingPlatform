#ifndef BASES_H
#define BASES_H

#include "qstring.h"

struct _Subject{
    QString introduce,precode,sufcode,chapterid,title;

    _Subject(QString _title,QString _introduce,QString _precode,QString _sufcode,QString _chapterid)
    {
        title = _title,introduce = _introduce,precode = _precode,sufcode = _sufcode,chapterid = _chapterid;
    }
};
struct _Case{
    QString subjectid,input,output;

    _Case(QString _input,QString _output,QString _subjectid)
    {
        input = _input,output = _output,subjectid = _subjectid;
    }
};

struct _Code{
    QString code,subjectid;
    _Code(QString _code,QString _subjectid)
    {
        code = _code, subjectid = _subjectid;
    }
};

struct _CompileRes{
    QString res;
    _CompileRes(QString _res)
    {
        res = _res;
    }
};




#endif // BASES_H
