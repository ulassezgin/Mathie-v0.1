/*

*********************************
<Author>		Ulas Sezgin
<Date>			07/03/2021
*********************************

*/

#include <iostream>
#include <cstdlib>

#include "functions.h"
#include "datainfo.h"

using namespace std;

int main()	{
	setlocale(LC_ALL, "Turkish");
	while(true)	{
		cout << "*********************************\n<Author>		Ulas Sezgin\n<Date>			07/03/2021\n*********************************\n\n"
		<<"    Bu program �esitli lise matematigi hesaplamalarini ��zebilmek i�in yazilmistir.Islem yapilabilecek konular asagida listelenmistir.\n\n"
		<<"    1- Basit Hesap Makinesi\n"
		<<"    2- Fonksiyonlarda Toplama �ikarma\n"
		<<"    4- Birinci ve Ikinci Derece Denklemlerin ��z�m�\n"
		<<"    5- Karmasik Sayilarda D�rt Islem\n"
		<<"    6- Bir Parabol�n Tepe Noktasi\n"
		<<"    �ikis yapmak i�in yukarida belirtilenler disinda bir tusa basiniz\n";
		int selection; 
		cin >> selection;
		switch (selection)	{
			case BASIC_MATH:
				pre_basicmath();
				break;
	        
			case MATH_FUNC:
				break;

			case EQUATIONS:
				break;

			case COMPLEX_MATH:
				pre_basicmath();
				break;
		
			case PEAK_PARABOL:
				break;

			default:
				return EXIT_SUCCESS;
				break;
		}
	}
	
	system("pause");
	return EXIT_SUCCESS;
}
