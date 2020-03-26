#ifndef TESTREFLECT_H
#define TESTREFLECT_H

#include <QObject>
#include <QMetaProperty>
class MyClass : public QObject
{
Q_OBJECT
Q_PROPERTY(int Member1 READ Member1 WRITE setMember1 )
Q_PROPERTY(int Member2 READ Member2 WRITE setMember2 )
Q_PROPERTY(QString MEMBER3 READ Member3 WRITE setMember3 )
public:
    explicit MyClass(QObject *parent = 0){}
signals:
public slots:
public:
    Q_INVOKABLE int Member1(){return m_member1;}
    Q_INVOKABLE int Member2(){return m_member2;}
    Q_INVOKABLE QString Member3(){return m_member3;}
    Q_INVOKABLE void setMember1( int mem1 ){ m_member1 = mem1; }
    Q_INVOKABLE void setMember2( int mem2 ){ m_member2 = mem2; }
    Q_INVOKABLE void setMember3( const QString& mem3 ){ m_member3 = mem3;}
    Q_INVOKABLE int func( QString flag ){

        if (flag == "+")
        {
            return m_member1 + m_member2;
        }
        else if (flag == "-")
        {
            return m_member1 - m_member2;
        }
        else if (flag == "*")
        {
            return m_member1 * m_member2;
        }
        else
        {
            if (!m_member2)
                return 0;
            else
                return m_member1 / m_member2;
        }
    }
private:
    int m_member1 = 55;
    int m_member2;
    QString m_member3;
};

#endif // TESTREFLECT_H
