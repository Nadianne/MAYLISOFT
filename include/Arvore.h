#ifndef ARVORE_H
#define ARVORE_H


class Arvore
{
    public:
        Arvore();
        virtual ~Arvore();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // ARVORE_H
