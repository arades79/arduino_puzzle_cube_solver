#include "cube_robot_operations.h"
void OpCodeSwitch()
{
switch (Serial.read()) {
  case 'RR':
    Right();
    break;
  case 'RI':
    RightInverse();
    break;
  case '2R':
    DoubleRight();
    break;
  case 'LL':
    Left();
    break;
  case 'LI':
    LeftInverse();
    break;
  case '2L':
    DoubleLeft();
    break;
  case 'UU':
    Up();
    break
    case 'UI':
    UpInverse();
    break;
    case '2U':
    DoubleUp();
    break;
    case 'DD':
    Down();
    break;
    case 'DI':
    DownInverse();
    break;
    case '2D':
    DoubleDown();
    break;
    case 'FF':
    Front();
    break;
    case 'FI':
    FrontInverse();
    break;
    case '2F':
    DoubleFront();
    break;
    case 'BB':
    Back();
    break;
    case 'BI':
    BackInverse();
    break;
    case '2B':
    DoubleBack();
    break;

}
}
