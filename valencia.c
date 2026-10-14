#include "valencia.h"

float voto1V1(float devStandard)
{
    if (devStandard >= 0.08 && devStandard <= 0.15) {
    return 10;
}

else if (devStandard < 0.08) {
    return 11;
}

else if (devStandard > 0.15 && devStandard <= 0.30) {
    return 8;
}

else if (devStandard > 0.30 && devStandard < 0.60) {
    return 6;
}

else if (devStandard > 0.60 && devStandard <= 0.90) {
    return 4.5;
}

else if (devStandard > 0.90 && devStandard <= 1.20) {
    return 3.5;
}

else if (devStandard > 1.20) {
    return 2;

}
return 0;
}



float voto2V1(float vMax)
{



if (vMax > 342)
{
    return 11;
}

else if (vMax > 332 && vMax <= 342) 
{
    return 10;
}

else if (vMax < 332 && vMax >= 322)
{
    return 6;
}

else if (vMax < 322 && vMax >= 318)
{
    return 3.5;
}

else if (vMax < 318)
{
    return 2;
}

return 0;
}



float voto3V1(float vCorner)
{




if (vCorner > 155)
{
    return 11;
}

else if (vCorner > 145 && vCorner <= 155) 
{
    return 10;
}

else if (vCorner <= 145 && vCorner >= 120)
{
    return 8;
}

else if (vCorner < 120 && vCorner >= 115)
{
    return 6;
}

else if (vCorner > 75 && vCorner < 115)
{
    return 5;
}

else if (vCorner < 75 && vCorner >= 65)
{
    return 3.5;
}

else if (vCorner < 65)
{
    return 2;
}



float voto4V1(float vAvg);

{
    if (vAvg <= 162.3 && vAvg > 161.5)
    {
        return 11;
    }
    else if (vAvg <= 161.5 && vAvg > 159.0)
    {
        return 10;
    }
    else if (vAvg <= 159.0 && vAvg > 157.5)
    {
        return 7.5;
    }
    else if (vAvg <= 157.5 && vAvg > 155.5)
    {
        return 6;
    }
    else if (vAvg <= 155.0)
    {
        return 3;
    }

}


return 0;
}