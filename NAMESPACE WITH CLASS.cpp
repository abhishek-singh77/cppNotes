#include<iostream>
/* multiple clasa and namespace*/
using namespace std;
namespace A
	class Test{
		public:
		int num;
	};
}
namespace B{
	class Test{
		public:
			int num;
	};
}

int main() {
	A:: Test T1;
	B:: Test T2;
}
