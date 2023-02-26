#include "benchmarktest.h"
#include <QDebug>



void setString(QString _name){
    quint16 count = _name.size();
}
void BenchMarkTest::BM_setString(benchmark::State& state) {
    QString verylongString = "vaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//    qDebug()<<sizeof(verylongString)<<verylongString.size();
    for (auto _ : state)
        setString(verylongString);
}
BENCHMARK(BenchMarkTest::BM_setString);



void setLinkString(QString &_name){
    quint16 count = _name.size();
}
void BenchMarkTest::BM_setLinkString(benchmark::State& state) {
    QString verylongString = "vaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//    qDebug()<<sizeof(&verylongString)<<verylongString.size();
    for (auto _ : state)
        setLinkString(verylongString);
}
BENCHMARK(BenchMarkTest::BM_setLinkString);
