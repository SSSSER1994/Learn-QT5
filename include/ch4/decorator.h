#pragma once
#include <QWidget>
#include <QDebug>

class Component
{
public:
    Component() = default;
    virtual ~Component() = default;
    virtual void operation() = 0;
};

class ConcreteComponent final : public Component
{
public:
    ConcreteComponent() = default;
    ~ConcreteComponent() = default;
    void operation() override
    {
        qDebug() << "We are doing concrete operation!";
    }
};

class Decorator : public Component
{
public:
    Decorator(Component *a_component) : m_comp_(a_component) {}
    virtual ~Decorator() = default;
    virtual void operation() = 0;

protected:
    Component *m_comp_;
};

class Decorator1 : public Decorator
{
public:
    Decorator1(Component *a_component)
        : Decorator(a_component) {}
    virtual ~Decorator1() = default;

    void operation() override
    {
        qDebug() << "Decorator1: Before we call m_comp->operation()";
        m_comp_->operation();
        qDebug() << "Decorator1: After we call m_comp->operation()";
    }
};

class Decorator2 : public Decorator
{
public:
    Decorator2(Component *a_component)
        : Decorator(a_component) {}
    virtual ~Decorator2() = default;

    void operation() override
    {
        qDebug() << "Decorator2: Before we call m_comp->operation()";
        m_comp_->operation();
        qDebug() << "Decorator2: After we call m_comp->operation()";
    }
};

void GenericDecoratorUsage();
