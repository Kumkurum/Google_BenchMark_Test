#include "benchmarktest.h"
#include <QDebug>

void case_0(quint32& _count){
    _count++;
}

void case_1(quint32& _count){
    _count++;
}
void case_2(quint32& _count){
    _count++;
}
void case_3(quint32& _count){
    _count--;
}
void case_4(quint32& _count){
    _count-=2;
}
void case_5(quint32& _count){
    _count++;
}
void case_6(quint32& _count){
    _count+=2;
}
void case_7(quint32& _count){
    _count--;
}
void case_8(quint32& _count){
    _count++;
}
void case_9(quint32& _count){
    _count--;
}
void case_10(quint32& _count){
    _count++;
}
void case_11(quint32& _count){
    _count++;
}
quint32 _count{0};


void setSwitchCase(int choose){
    switch (choose) {
    case 0:
        case_0(_count);
        break;
    case 1:
        case_1(_count);
        break;
    case 2:
        case_2(_count);
        break;
    case 3:
        case_3(_count);
        break;
    case 4:
        case_4(_count);
        break;
    case 5:
        case_5(_count);
        break;
    case 6:
        case_6(_count);
        break;
    case 7:
        case_7(_count);
        break;
    case 8:
        case_8(_count);
        break;
    case 9:
        case_9(_count);
        break;
    case 10:
        case_10(_count);
        break;


    case 11:
        case_1(_count);
        break;
    case 12:
        case_2(_count);
        break;
    case 13:
        case_3(_count);
        break;
    case 14:
        case_4(_count);
        break;
    case 15:
        case_5(_count);
        break;
    case 16:
        case_6(_count);
        break;
    case 17:
        case_7(_count);
        break;
    case 18:
        case_8(_count);
        break;
    case 19:
        case_9(_count);
        break;
    case 20:
        case_10(_count);
        break;



    case 21:
        case_1(_count);
        break;
    case 22:
        case_2(_count);
        break;
    case 23:
        case_3(_count);
        break;
    case 24:
        case_4(_count);
        break;
    case 25:
        case_5(_count);
        break;
    case 26:
        case_6(_count);
        break;
    case 27:
        case_7(_count);
        break;
    case 28:
        case_8(_count);
        break;
    case 29:
        case_9(_count);
        break;
    case 30:
        case_10(_count);
        break;


    case 31:
        case_1(_count);
        break;
    case 32:
        case_2(_count);
        break;
    case 33:
        case_3(_count);
        break;
    case 34:
        case_4(_count);
        break;
    case 35:
        case_5(_count);
        break;
    case 36:
        case_6(_count);
        break;
    case 37:
        case_7(_count);
        break;
    case 38:
        case_8(_count);
        break;
    case 39:
        case_9(_count);
        break;
    case 40:
        case_10(_count);
        break;


    case 41:
        case_1(_count);
        break;
    case 42:
        case_2(_count);
        break;
    case 43:
        case_3(_count);
        break;
    case 44:
        case_4(_count);
        break;
    case 45:
        case_5(_count);
        break;
    case 46:
        case_6(_count);
        break;
    case 47:
        case_7(_count);
        break;
    case 48:
        case_8(_count);
        break;
    case 49:
        case_9(_count);
        break;
    case 50:
        case_10(_count);
        break;


    case 51:
        case_1(_count);
        break;
    case 52:
        case_2(_count);
        break;
    case 53:
        case_3(_count);
        break;
    case 54:
        case_4(_count);
        break;
    case 55:
        case_5(_count);
        break;
    case 56:
        case_6(_count);
        break;
    case 57:
        case_7(_count);
        break;
    case 58:
        case_8(_count);
        break;
    case 59:
        case_9(_count);
        break;
    case 60:
        case_10(_count);
        break;

    default:
        break;
    }
}
void BenchMarkTest::BM_switchCase(benchmark::State& state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        setSwitchCase(choose);
    }
}
BENCHMARK(BenchMarkTest::BM_switchCase);





void setIfElse(int choose){
    if(choose == 0)
        case_0(_count);
    else if(choose == 1)
        case_1(_count);
    else if(choose == 2)
        case_2(_count);
    else if(choose == 3)
        case_3(_count);
    else if(choose == 4)
        case_4(_count);
    else if(choose == 5)
        case_5(_count);
    else if(choose == 6)
        case_6(_count);
    else if(choose == 7)
        case_7(_count);
    else if(choose == 8)
        case_8(_count);
    else if(choose == 9)
        case_9(_count);
    else if(choose == 10)
        case_10(_count);

    else if(choose == 11)
        case_1(_count);
    else if(choose == 12)
        case_2(_count);
    else if(choose == 13)
        case_3(_count);
    else if(choose == 14)
        case_4(_count);
    else if(choose == 15)
        case_5(_count);
    else if(choose == 16)
        case_6(_count);
    else if(choose == 17)
        case_7(_count);
    else if(choose == 18)
        case_8(_count);
    else if(choose == 19)
        case_9(_count);
    else if(choose == 20)
        case_10(_count);


    else if(choose == 21)
        case_1(_count);
    else if(choose == 22)
        case_2(_count);
    else if(choose == 23)
        case_3(_count);
    else if(choose == 24)
        case_4(_count);
    else if(choose == 25)
        case_5(_count);
    else if(choose == 26)
        case_6(_count);
    else if(choose == 27)
        case_7(_count);
    else if(choose == 28)
        case_8(_count);
    else if(choose == 29)
        case_9(_count);
    else if(choose == 30)
        case_10(_count);



    else if(choose == 31)
        case_1(_count);
    else if(choose == 32)
        case_2(_count);
    else if(choose == 33)
        case_3(_count);
    else if(choose == 34)
        case_4(_count);
    else if(choose == 35)
        case_5(_count);
    else if(choose == 36)
        case_6(_count);
    else if(choose == 37)
        case_7(_count);
    else if(choose == 38)
        case_8(_count);
    else if(choose == 39)
        case_9(_count);
    else if(choose == 40)
        case_10(_count);



    else if(choose == 41)
        case_1(_count);
    else if(choose == 42)
        case_2(_count);
    else if(choose == 43)
        case_3(_count);
    else if(choose == 44)
        case_4(_count);
    else if(choose == 45)
        case_5(_count);
    else if(choose == 46)
        case_6(_count);
    else if(choose == 47)
        case_7(_count);
    else if(choose == 48)
        case_8(_count);
    else if(choose == 49)
        case_9(_count);
    else if(choose == 50)
        case_10(_count);


    else if(choose == 51)
        case_1(_count);
    else if(choose == 52)
        case_2(_count);
    else if(choose == 53)
        case_3(_count);
    else if(choose == 54)
        case_4(_count);
    else if(choose == 55)
        case_5(_count);
    else if(choose == 56)
        case_6(_count);
    else if(choose == 57)
        case_7(_count);
    else if(choose == 58)
        case_8(_count);
    else if(choose == 59)
        case_9(_count);
    else if(choose == 60)
        case_10(_count);

};

void BenchMarkTest::BM_ifElse(benchmark::State &state){
    _count = 0;
    for (auto _ : state){
        int choose = rand()%11;
        setIfElse(choose);
    }
    //    qDebug()<<zz;
}
BENCHMARK(BenchMarkTest::BM_ifElse);




void setIf(int choose){
    if(choose == 0)
        case_0(_count);
    if(choose == 1)
        case_1(_count);
    if(choose == 2)
        case_2(_count);
    if(choose == 3)
        case_3(_count);
    if(choose == 4)
        case_4(_count);
    if(choose == 5)
        case_5(_count);
    if(choose == 6)
        case_6(_count);
    if(choose == 7)
        case_7(_count);
    if(choose == 8)
        case_8(_count);
    if(choose == 9)
        case_9(_count);
    if(choose == 10)
        case_10(_count);


    if(choose == 11)
        case_1(_count);
    if(choose == 12)
        case_2(_count);
    if(choose == 13)
        case_3(_count);
    if(choose == 14)
        case_4(_count);
    if(choose == 15)
        case_5(_count);
    if(choose == 16)
        case_6(_count);
    if(choose == 17)
        case_7(_count);
    if(choose == 18)
        case_8(_count);
    if(choose == 19)
        case_9(_count);
    if(choose == 20)
        case_10(_count);



    if(choose == 21)
        case_1(_count);
    if(choose == 22)
        case_2(_count);
    if(choose == 23)
        case_3(_count);
    if(choose == 24)
        case_4(_count);
    if(choose == 25)
        case_5(_count);
    if(choose == 26)
        case_6(_count);
    if(choose == 27)
        case_7(_count);
    if(choose == 28)
        case_8(_count);
    if(choose == 29)
        case_9(_count);
    if(choose == 30)
        case_10(_count);


    if(choose == 31)
        case_1(_count);
    if(choose == 32)
        case_2(_count);
    if(choose == 33)
        case_3(_count);
    if(choose == 34)
        case_4(_count);
    if(choose == 35)
        case_5(_count);
    if(choose == 36)
        case_6(_count);
    if(choose == 37)
        case_7(_count);
    if(choose == 38)
        case_8(_count);
    if(choose == 39)
        case_9(_count);
    if(choose == 40)
        case_10(_count);


    if(choose == 41)
        case_1(_count);
    if(choose == 42)
        case_2(_count);
    if(choose == 43)
        case_3(_count);
    if(choose == 44)
        case_4(_count);
    if(choose == 45)
        case_5(_count);
    if(choose == 46)
        case_6(_count);
    if(choose == 47)
        case_7(_count);
    if(choose == 48)
        case_8(_count);
    if(choose == 49)
        case_9(_count);
    if(choose == 50)
        case_10(_count);


    if(choose == 51)
        case_1(_count);
    if(choose == 52)
        case_2(_count);
    if(choose == 53)
        case_3(_count);
    if(choose == 54)
        case_4(_count);
    if(choose == 55)
        case_5(_count);
    if(choose == 56)
        case_6(_count);
    if(choose == 57)
        case_7(_count);
    if(choose == 58)
        case_8(_count);
    if(choose == 59)
        case_9(_count);
    if(choose == 60)
        case_10(_count);
};

void BenchMarkTest::BM_if(benchmark::State &state){
    _count = 0;
    for (auto _ : state){
        int choose = rand()%11;
        setIf(choose);
    }
    //    qDebug()<<zz;
}
BENCHMARK(BenchMarkTest::BM_if);



typedef void (*funcType)(quint32&);
funcType massiveConteinerCStyle[]{
    case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,


            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,
};
void BenchMarkTest::BM_MassiveLinks_CStyle(benchmark::State& state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        massiveConteinerCStyle[choose](_count);
    }
}
BENCHMARK(BenchMarkTest::BM_MassiveLinks_CStyle);



QVector<std::function<void(quint32&)>> massiveConteiner{
                                       case_0,
                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,

                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,

                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,

                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,

                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,

                                       case_1,
                                       case_2,
                                       case_3,
                                       case_4,
                                       case_5,
                                       case_6,
                                       case_7,
                                       case_8,
                                       case_9,
                                       case_10,
                                       };
void BenchMarkTest::BM_MassiveLinks_QVector_Function(benchmark::State &state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        massiveConteiner[choose](_count);
    }
}
BENCHMARK(BenchMarkTest::BM_MassiveLinks_QVector_Function);



std::vector<std::function<void(quint32&)>> massiveConteinerStd{
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10,
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10,
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10,
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10,
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10,
                                           case_0,
                                           case_1,
                                           case_2,
                                           case_3,
                                           case_4,
                                           case_5,
                                           case_6,
                                           case_7,
                                           case_8,
                                           case_9,
                                           case_10
                                           };
void BenchMarkTest::BM_MassiveLinks_Vector_Fucntion(benchmark::State &state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        massiveConteinerStd[choose](_count);
    }
}
BENCHMARK(BenchMarkTest::BM_MassiveLinks_Vector_Fucntion);


QVector<funcType> massiveConteiner_Std{
    case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,
};
void BenchMarkTest::BM_MassiveLinks_QVector_CStyle(benchmark::State &state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        massiveConteiner_Std[choose](_count);
    }
}
BENCHMARK(BenchMarkTest::BM_MassiveLinks_QVector_CStyle);




std::vector<funcType> massiveConteiner_VectorStd{
    case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10,

            case_0,
            case_1,
            case_2,
            case_3,
            case_4,
            case_5,
            case_6,
            case_7,
            case_8,
            case_9,
            case_10
};
void BenchMarkTest::BM_MassiveLinks_Vector_CStyle(benchmark::State &state){
    _count=0;
    for (auto _ : state){
        int choose = rand()%11;
        massiveConteiner_VectorStd[choose](_count);
    }
}
BENCHMARK(BenchMarkTest::BM_MassiveLinks_Vector_CStyle);
