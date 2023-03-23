#include <stdio.h>

void calc_data(Student *pary) {
    for (int i = 0; i < 5; i++) {
        pary->tot=pary->mic+pary->lin+pary->pro;
        pary->avg=pary->tot/3.0;
        if(pary->avg>=90.0) pary->grade='A';
        else if(pary->avg>=80.0) pary->grade='B';
        else if(pary->avg>=70.0) pary->grade='C';
        else pary->grade='F';
        pary++;
    }
    return 0;
}