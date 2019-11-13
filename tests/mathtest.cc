#include <QtTest>

class MathTest : public QObject
{
    Q_OBJECT

private slots:
    void addition();
};

void MathTest::addition()
{
    QCOMPARE(2 + 2, 4);
}

QTEST_MAIN(MathTest)
#include "mathtest.moc"
