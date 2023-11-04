#pragma once



class Counter {
private:
    int num;
public:
    Counter()
    {
        num = 1;
    }

    Counter(int num1) {
        num = num1;
    }
    void inc();
    void dec();
    int get_num();
};