/*  
    Copyright 2017 Aditya Kumar

    This file is part of psychic-spoon.

    psychic-spoon is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    psychic-spoon is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with psychic-spoon.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
  return a+b;
}

int main() {
  cout << "Copyright 2017 Aditya Kumar.\nSome rights reserved.\n\nLicensed under the GNU GPL v3.0 License\n\n\n";
  int no, nt;
  cout << "Number 1: ";
  cin >> no;
  cout << "Number 2: ";
  cin >> nt;
  cout << "Sum: " << add(no,nt) << ".\n";
}
