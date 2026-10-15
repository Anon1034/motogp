#include "mugello.h"

float voto1M1(float devStandard)
{
if (devStandard < 0.09) {
    return 11;
}
    else if (devStandard >= 0.09 && devStandard <= 0.17) {
    return 10;
}

else if (devStandard > 0.17 && devStandard <= 0.35) {
    return 8;
}

else if (devStandard > 0.35 && devStandard <= 0.70) {
    return 6;
}

else if (devStandard > 0.70 && devStandard <= 1.05) {
    return 4.5;
}

else if (devStandard > 1.05 && devStandard <= 1.40) {
    return 3.5;
}

else if (devStandard > 1.40) 
{
    return 2;

}
return 0;
}



float voto2M1(float vMax)
{



if (vMax > 361)
{
    return 11;
}

else if (vMax > 351 && vMax <= 361) 
{
    return 10;
}

else if (vMax <= 351 && vMax >= 341)
{
    return 6;
}

else if (vMax < 341 && vMax >= 337)
{
    return 3.5;
}

else if (vMax < 337)
{
    return 2;
}

return 0;
}



float voto3M1(float vCorner)
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


float voto4M1(float v1Avg)
{

    if (v1Avg > 178)
    {
        return 11;
    }
    else if (v1Avg >= 177.1 && v1Avg <= 178)
    {
        return 10;
    }
    else if (v1Avg <= 177.1 && v1Avg >= 174.4)
    {
        return 7.5;
    }
    else if (v1Avg <= 174.4 && v1Avg > 172.7)
    {
        return 6;
    }
    else if (v1Avg <= 172.7 && v1Avg >= 170.5)
    {
        return 4.5;
    }
    else if (v1Avg < 170.5)
    {
        return 3;
    }


return 0;
}