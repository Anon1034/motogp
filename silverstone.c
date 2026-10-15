#include "silverstone.h"

float voto1S1(float devStandard)
{
if (devStandard < 0.10) {
    return 11;
}
    else if (devStandard >= 0.10 && devStandard <= 0.20) {
    return 10;
}

else if (devStandard > 0.20 && devStandard <= 0.40) {
    return 8;
}

else if (devStandard > 0.40 && devStandard <= 0.80) {
    return 6;
}

else if (devStandard > 0.80 && devStandard <= 1.20) {
    return 4.5;
}

else if (devStandard > 1.20 && devStandard <= 1.55) {
    return 3.5;
}

else if (devStandard > 1.55) 
{
    return 2;

}
return 0;
}



float voto2S1(float vMax)
{



if (vMax > 340)
{
    return 11;
}

else if (vMax > 330 && vMax <= 340) 
{
    return 10;
}

else if (vMax >= 330 && vMax <= 320)
{
    return 6;
}

else if (vMax > 316 && vMax >= 320)
{
    return 3.5;
}

else if (vMax < 316)
{
    return 2;
}

return 0;
}



float voto3S1(float vCorner)
{




if (vCorner > 155)
{
    return 11;
}

else if (vCorner > 145 && vCorner <= 155) 
{
    return 10;
}

else if (vCorner > 120 && vCorner >= 145)
{
    return 8;
}

else if (vCorner > 115 && vCorner <= 120)
{
    return 6;
}

else if (vCorner > 75 && vCorner <= 115)
{
    return 5;
}

else if (vCorner > 65 && vCorner <= 75)
{
    return 3.5;
}

else if (vCorner <= 65.0)
{
    return 2;
}
return 0;
}


float voto4S1(float v1Avg)
{

    if (v1Avg > 178)
    {
        return 11;
    }
    else if (v1Avg >= 177.1 && v1Avg <= 178)
    {
        return 10;
    }
    else if (v1Avg > 174.4 && v1Avg <= 177.1)
    {
        return 7.5;
    }
    else if (v1Avg > 172.7 && v1Avg <= 174.4)
    {
        return 6;
    }
    else if (v1Avg > 170.5 && v1Avg <= 172.7)
    {
        return 4.5;
    }
    else if (v1Avg < 170.5)
    {
        return 3;
    }


return 0;
}