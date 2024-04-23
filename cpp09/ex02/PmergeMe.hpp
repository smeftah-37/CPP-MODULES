#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include <ctime>
#include <unistd.h>
#include <iterator>
#include <iomanip>


class fordJohnsonSort
{
    private:
        clock_t start;
        clock_t stop;
        std::list<std::pair<int , int> > lst;
        std::deque<std::pair<int , int> > dqe;
        int checkInt(char * s);

    public:
        void sortForD();
        void sortForL();
        std::list<int> creatJacobSequence(int siz);
        std::list<std::pair<int, int> >::iterator merge(std::list<std::pair<int, int> >::iterator low, std::list<std::pair<int, int> >::iterator high);
        void mergeSort(std::list<std::pair<int, int> >::iterator low, std::list<std::pair<int, int> >::iterator high);
        std::deque<int> creatJacobSequenceD(int siz);
        void mergeSortD(std::deque<std::pair<int, int> >::iterator low, std::deque<std::pair<int, int> >::iterator high);
        std::deque<std::pair<int, int> >::iterator mergeD(std::deque<std::pair<int, int> >::iterator low, std::deque<std::pair<int, int> >::iterator high);
        fordJohnsonSort();
        fordJohnsonSort(char **argv, int argc);
        ~fordJohnsonSort();
        fordJohnsonSort(const fordJohnsonSort &a);
        fordJohnsonSort &operator=(const fordJohnsonSort &a);

};