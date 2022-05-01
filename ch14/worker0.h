// worker0.h -- klasa hierarchii Worker
#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

class Worker // abstrakcyjna klasa bazowa
{
    private:
        std::string fullname;
        long id;
    public:
        Worker() : fullname("brak"), id(0L) {}
        Worker(const std::string & s, long n) : fullname(s), id(n) {}
        virtual ~Worker() = 0;  // destruktor czysto wirtualny
        virtual void Set();
        virtual void Show() const;
};

class Waiter : public Worker
{
    private:
        int panache;
    public:
        Waiter() : Worker(), panache(0) {}
        Waiter(const std::string & s, long n, int p = 0) : Worker(s, n), panache(p) {}
        Waiter(const Worker & wk, int p = 0) : Worker(wk), panache(p) {}
        void Set();
        void Show() const;
};

class Singer : public Worker
{
    protected:
        enum {inny, alt, kontralt, sopran, bas, baryton, tenor};
        enum {Vtypes = 7};
    private:
        static const char *pv[Vtypes];    // odpowiednik typu głosu w postaci ciągu znaków
        int voice;
    public:
        Singer() : Worker(), voice(inny) {}
        Singer(const std::string & s, long n, int v = inny) : Worker(s, n), voice(v) {}
        Singer(const Worker & wk, int v = inny) : Worker(wk), voice(v) {}
        void Set();
        void Show() const;
};

#endif