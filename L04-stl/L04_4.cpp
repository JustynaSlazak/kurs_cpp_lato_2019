// Exercise 4:
// 1. Create an empty list.
// 2. Fill it with numbers from 1 to 1’000’000.
// 3. Measure time of execution (time ./a.out in terminal)
// 4. Print value of the element with index 500’000
// 5. Measure time of execution
// 6. Replace list with vector
// 7. Measure time of execution

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main(){
    std::list <int> ls;
    ls.resize(1000000);
    std::iota(ls.begin(), ls.end(), 1);
    auto itHalf = std::next(ls.begin(), 500000);
    std::cout << *itHalf << '\n';

    std::vector<int> v;
    v.resize(1000000);
    std::iota(v.begin(), v.end(), 1);
    std::cout << v[500000] << '\n';

    return 0;
}
//result: Vector is faster
//vectror:
//real	0m0,389s
//user	0m0,323s
//sys	0m0,026s
//list:
//real	0m0,397s
//user	0m0,331s
//sys	0m0,026s
