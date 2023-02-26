#include "benchmarktest.h"
#include <QDebug>

void setQVector(QVector<quint64> _name){
    quint16 count = _name.size();
}
void BenchMarkTest::BM_setQVector(benchmark::State& state){
    QVector<quint64> vector{0,12,12,12,12,12,12};
//    qDebug()<<sizeof(vector)<<vector.size();
    for (auto _ : state)
        setQVector(vector);
}
BENCHMARK(BenchMarkTest::BM_setQVector);

void setLinkQVector(QVector<quint64>& _name){
    quint16 count = _name.size();
}
void BenchMarkTest::BM_setLinkQVector(benchmark::State& state){
    QVector<quint64> vector{0,12,12,12,12,12,12};
//    qDebug()<<sizeof(&vector)<<vector.size();
    for (auto _ : state)
        setLinkQVector(vector);
}
BENCHMARK(BenchMarkTest::BM_setLinkQVector);
