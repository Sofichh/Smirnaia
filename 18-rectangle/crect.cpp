#include "crect.h"

Crect::Crect(double _xl1,double _yl1,double _xr1,double _yr1,double _xl2,double _yl2,double _xr2,double _yr2) : x1L(_xl1),y1L(_yl1),x1R(_xr1),y1R(_yr1),x2L(_xl2),y2L(_yl2),x2R(_xr2),y2R(_yr2){}
	
void Crect::peresechenie(){
	if((((x1L<=x2L)&&(x2L<=x2R)&&(x2R<=x1R))&&((y1L<=y2L)&&(y2L<=y2R)&&(y2R<=y1R)))||(((x2L<=x1L)&&(x1L<=x1R)&&(x1R<=x2R))&&((y2L<=y1L)&&(y1L<=y1R)&&(y1R<=y2R))))
		cout << "Ne peresekayutsya" << endl;
	else if(((x1L<=x2L<=x1R)&&(y1L<=y2R)&&(y2L<=y1R))||((x1L<=x2R<=x1R)&&(y1L<=y2R)&&(y2L<=y1R)))
		cout << "Peresekayutsya" << endl;
	else cout << "Ne peresekayutsya" << endl;
	}
