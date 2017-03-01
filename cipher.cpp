#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <vector>
#include <random>

int main() {

/*
   for (int i = 0; i < vec.size(); i++){    uzupelnianie z zakresu
       vec[i] = i%3;
   };

   std::generate_n(std::back_inserter(d), 14, []{     uzupelnianie losowymi z zakresu
       return rand() % 7;
   });

   std::ostream_iterator<int> out(std::cout, " ");         wypisywanie
   std::copy(std::begin(vec), std::end(vec), out);

   auto it = std::unique(std::begin(d), std::end(d));      unikaty
   d.resize(std::distance(std::begin(d), it));
*/

   std::map <int, int> cipher;
   std::vector<int> used;

   for (int i = 0; i < 59; i++){
       used.insert(used.begin(), i);
   }

   std::random_device rd;
   std::mt19937 g(rd());
   std::shuffle(used.begin(), used.end(), g);

   for (int i = 0; i < 59; i++){
       cipher[i] = used[i];
   }

   for (int i = 0; i < 59; i++){
       std::cout << "cipher " << i << " = " << cipher[i] << std::endl;
   }
   return 0;
}
