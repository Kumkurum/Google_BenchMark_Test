#ifndef BENCHMARKTEST_H
#define BENCHMARKTEST_H
#include <QObject>
#include <benchmark/benchmark.h>

class BenchMarkTest{
public:
    static void BM_setString(benchmark::State& state);
    static void BM_setLinkString(benchmark::State& state);

    static void BM_setQVector(benchmark::State& state);
    static void BM_setLinkQVector(benchmark::State& state);

    static void BM_switchCase(benchmark::State &state);
    static void BM_ifElse(benchmark::State &state);
    static void BM_if(benchmark::State &state);
    static void BM_MassiveLinks_CStyle(benchmark::State &state);

    static void BM_MassiveLinks_QVector_Function(benchmark::State &state);
    static void BM_MassiveLinks_QVector_CStyle(benchmark::State &state);

    static void BM_MassiveLinks_Vector_Fucntion(benchmark::State &state);
    static void BM_MassiveLinks_Vector_CStyle(benchmark::State &state);

};



#endif // BENCHMARKTEST_H
