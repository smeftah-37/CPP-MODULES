#include "PmergeMe.hpp"
#include<ctime>


std::deque<int> fordJohnsonSort::creatJacobSequenceD(int siz)
{
    int arr[siz];
    std::deque<int> tmp;
    if(siz >2)
    {
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
    }
    else
    {
        int k = 0;
        while(k < siz)
            tmp.push_back(k++);
        return tmp;
    }
    int i = 2;
    int previous= 1;
    tmp.push_back(0);
    while(static_cast<int>(tmp.size()) < siz && i < siz)
    {
        
        arr[i] = arr[i - 1] + (2 *arr[i - 2]);
        if((arr[i]) > siz)
        {
            int t = siz - 1;

            while(t > previous)
            {


                tmp.push_back(t--);
            }

            break;
        }
        tmp.push_back(arr[i]);
        int t = arr[i] -1;
        while(t > previous)
        {


            tmp.push_back(t--);
        }
        previous = arr[i];
        i++;
   
    }
    size_t tm = siz;
    while(tmp.size()  < static_cast<size_t>(siz))
        tmp.push_back(--tm);
    return tmp;
}

void fordJohnsonSort::sortForD()
{
    start = std::clock();
    mergeSortD(dqe.begin(),dqe.end());
    std::deque<int> final;
    std::deque<int> pend;
    for (std::deque<std::pair<int, int> >::iterator it = dqe.begin(); it != dqe.end(); ++it)
    {
        final.push_back(it->first);
        if(it->second != -1)
            pend.push_back(it->second);
    }
    std::deque<int> j = creatJacobSequenceD(pend.size());
    for (size_t i = 0; i <  j.size(); i++)
    {
        final.insert(upper_bound(final.begin(),final.end(),pend[j[i]]),pend[j[i]]);
    }

   
    stop =std::clock();
    double duree = static_cast<double>(stop - start)/CLOCKS_PER_SEC;
    std::cout << "After:  ";
    size_t i = 0;
    for(i = 0; i < final.size() && i < 4; i++)
    {
        std::cout << final[i] << " ";
    }
    if(i != final.size())
        std::cout << "[...]";
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(6) << "Time to process a range of " << final.size()<<" elements with std::deque: " << duree << " seconds" << std::endl;
}



std::deque<std::pair<int, int> >::iterator fordJohnsonSort::mergeD(std::deque<std::pair<int, int> >::iterator low, std::deque<std::pair<int, int> >::iterator high) {
    std::deque<std::pair<int, int> >::iterator i = low;
    std::deque<std::pair<int, int> >::iterator j = low;

    std::deque<std::pair<int, int> >::iterator highIterator = high;
    --highIterator;  // Move high to the last element

    while (j != highIterator) {
        if (j->first < highIterator->first) {
            std::iter_swap(i, j);
            ++i;
        }
        ++j;
    }

    std::iter_swap(i, highIterator);
    return i;
}

void fordJohnsonSort::mergeSortD(std::deque<std::pair<int, int> >::iterator low, std::deque<std::pair<int, int> >::iterator high) {
    if (std::distance(low, high) > 0) {
        std::deque<std::pair<int, int> >::iterator partitionIndex = mergeD(low, high);
        mergeSortD(low, partitionIndex);
        mergeSortD(++partitionIndex, high);
    }
}
//----------------------------------------------
std::list<int> fordJohnsonSort::creatJacobSequence(int siz)
{
    
    int arr[siz];
    std::list<int> tmp ;
        stop= std::clock();
    if(siz >2)
    {
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
    }
    else
    {
        int k = 0;
        while(k < siz)
            tmp.push_back(k++);
        return tmp;
    }
    int i = 2;
    int previous= 1;
    tmp.push_back(0);
    while(static_cast<int>(tmp.size()) < siz && i < siz)
    {
        
        arr[i] = arr[i - 1] + (2 *arr[i - 2]);
        if((arr[i]) > siz)
        {
            int t = siz - 1;

            while(t > previous)
            {


                tmp.push_back(t--);
            }

            break;
        }
        tmp.push_back(arr[i]);
        int t = arr[i] -1;

        while(t > previous)
        {
            tmp.push_back(t--);
        }
        previous = arr[i];
        i++;
   
    }
    size_t tm = siz;
;

    while(tmp.size()  < static_cast<size_t>(siz))
        tmp.push_back(--tm);

    
    return tmp;
}

void fordJohnsonSort::sortForL()
{
   start = std::clock();
    mergeSort(lst.begin(),lst.end());
    std::list<int> final;
    std::list<int> pend;
    for (std::list<std::pair<int, int> >::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        final.push_back(it->first);
        if(it->second != -1)
        {
            pend.push_back(it->second);
        }
    }
    std::list<int> j = creatJacobSequence(pend.size());
    std::list<int>::iterator itJ = j.begin();
    std::list<int>::iterator itPend = pend.begin();

    while (itJ != j.end()) {
        std::advance(itPend, *itJ);
        final.insert(std::upper_bound(final.begin(), final.end(), *itPend), *itPend);
        ++itJ;
        itPend = pend.begin();
    }
    stop =std::clock();
         double duree = static_cast<double>(stop - start)/CLOCKS_PER_SEC;

    std::cout << std::fixed << std::setprecision(6) << "Time to process a range of " << final.size()<<" elements with std::list: " << duree << " seconds" << std::endl;
}




std::list<std::pair<int, int> >::iterator fordJohnsonSort::merge(std::list<std::pair<int, int> >::iterator low, std::list<std::pair<int, int> >::iterator high) {
    std::list<std::pair<int, int> >::iterator i = low;
    std::list<std::pair<int, int> >::iterator j = low;

    std::list<std::pair<int, int> >::iterator highIterator = high;
    --highIterator;  

    while (j != highIterator) {
        if (j->first < highIterator->first) {
            std::iter_swap(i, j);
            ++i;
        }
        ++j;
    }

    std::iter_swap(i, highIterator);
    return i;
}

void fordJohnsonSort::mergeSort(std::list<std::pair<int, int> >::iterator low, std::list<std::pair<int, int> >::iterator high) {
    if (std::distance(low, high) > 0) {
        std::list<std::pair<int, int> >::iterator partitionIndex = merge(low, high);
        mergeSort(low, partitionIndex);
        mergeSort(++partitionIndex, high);
    }
}

fordJohnsonSort::fordJohnsonSort()
{
}
int fordJohnsonSort::checkInt(char *s)
{
    int a = atoi(s);
    if (a > 0 || (a == 0 && std::string(s) == "0"))
        return a;
    throw std::runtime_error("Error");
}
fordJohnsonSort::fordJohnsonSort(char **argv, int argc)
{
    std::deque<int> cont;
    for (int i = 1; i < argc ; i++)
    {
        size_t j = 0;
        while (argv[i][j])
        {
            if (!isdigit(argv[i][j]))
                throw std::runtime_error("Invalid number");
            j++;
        }
        if (i < argc - 1)
        {
            int a = checkInt(argv[i]);
            int b = checkInt(argv[i + 1]);
            cont.push_back(a),
            cont.push_back(b);
            if (a > b)
            {
                lst.push_back(std::make_pair(a, b));
                dqe.push_back(std::make_pair(a, b));
            }
            else
            {
                lst.push_back(std::make_pair(b, a));
                dqe.push_back(std::make_pair(b, a));
            }
            i++;
        }
        else
        {
            int a = checkInt(argv[i]);
            cont.push_back(a),

            lst.push_back(std::make_pair(a, -1));
            dqe.push_back(std::make_pair(a, -1));
        }
    }
    std::cout << "Before: ";
    size_t i = 0;
    for(i = 0; i < cont.size() && i < 4;i++)
        std::cout << cont[i] << " " ;
    if(i != cont.size())
        std::cout << "[...]";
    std::cout << std::endl;

}
fordJohnsonSort::~fordJohnsonSort()
{
}
fordJohnsonSort::fordJohnsonSort(const fordJohnsonSort &a)
{
    *this = a;
}
fordJohnsonSort &fordJohnsonSort::operator=(const fordJohnsonSort &a)
{
    if (this != &a)
    {
        start = a.start;
        stop = a.stop;
        lst = a.lst;
        dqe = a.dqe;
    }
    return (*this);
}