/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

int classifier(float * x) {
  int results[100];
  if (x[8] <= 316.3899993896) {
    if (x[6] <= 102.6250000000) {
      results[0] = 0;
    }
    else {
      if (x[5] <= -5.4699999690) {
        results[0] = 2;
      }
      else {
        results[0] = 1;
      }
    }
  }
  else {
    results[0] = 3;
  }
  if (x[3] <= 7.4500000477) {
    if (x[0] <= 6.4650001526) {
      if (x[1] <= 0.9600000083) {
        results[1] = 3;
      }
      else {
        results[1] = 0;
      }
    }
    else {
      if (x[10] <= 2.0000000000) {
        results[1] = 0;
      }
      else {
        results[1] = 2;
      }
    }
  }
  else {
    results[1] = 1;
  }
  if (x[7] <= 131.3400039673) {
    if (x[4] <= 11.5799999237) {
      if (x[5] <= -8.7449998856) {
        results[2] = 2;
      }
      else {
        results[2] = 0;
      }
    }
    else {
      results[2] = 3;
    }
  }
  else {
    if (x[3] <= 3.2650001049) {
      results[2] = 0;
    }
    else {
      results[2] = 1;
    }
  }
  if (x[5] <= -2.9150000811) {
    if (x[8] <= 316.3899993896) {
      if (x[6] <= 114.9650001526) {
        results[3] = 0;
      }
      else {
        results[3] = 2;
      }
    }
    else {
      results[3] = 3;
    }
  }
  else {
    if (x[0] <= 5.6399998665) {
      results[3] = 0;
    }
    else {
      results[3] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 269.0850067139) {
      if (x[6] <= 102.6250000000) {
        results[4] = 0;
      }
      else {
        results[4] = 2;
      }
    }
    else {
      results[4] = 3;
    }
  }
  else {
    results[4] = 1;
  }
  if (x[7] <= 119.9600028992) {
    if (x[0] <= 6.4650001526) {
      if (x[8] <= 296.1350021362) {
        results[5] = 0;
      }
      else {
        results[5] = 3;
      }
    }
    else {
      if (x[9] <= 4.0000000000) {
        results[5] = 0;
      }
      else {
        results[5] = 2;
      }
    }
  }
  else {
    if (x[6] <= 68.9750003815) {
      results[5] = 0;
    }
    else {
      results[5] = 1;
    }
  }
  if (x[7] <= 150.4899978638) {
    if (x[0] <= 2.1549999714) {
      if (x[1] <= 2.6499999464) {
        results[6] = 3;
      }
      else {
        results[6] = 0;
      }
    }
    else {
      if (x[9] <= 4.5000000000) {
        results[6] = 0;
      }
      else {
        results[6] = 2;
      }
    }
  }
  else {
    if (x[8] <= 41.9700012207) {
      if (x[0] <= 4.7100000381) {
        results[6] = 0;
      }
      else {
        results[6] = 1;
      }
    }
    else {
      results[6] = 0;
    }
  }
  if (x[3] <= 6.4550001621) {
    if (x[8] <= 316.3899993896) {
      if (x[4] <= 1.4900000095) {
        results[7] = 2;
      }
      else {
        results[7] = 0;
      }
    }
    else {
      results[7] = 3;
    }
  }
  else {
    if (x[2] <= 5.0950000286) {
      results[7] = 0;
    }
    else {
      results[7] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    if (x[6] <= 14.2100000381) {
      if (x[10] <= 1.5000000000) {
        results[8] = 0;
      }
      else {
        results[8] = 3;
      }
    }
    else {
      if (x[8] <= 563.6800003052) {
        results[8] = 0;
      }
      else {
        results[8] = 3;
      }
    }
  }
  else {
    if (x[3] <= 4.1850001216) {
      if (x[7] <= 39.4100008011) {
        results[8] = 2;
      }
      else {
        results[8] = 0;
      }
    }
    else {
      results[8] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[0] <= 2.8250000477) {
      if (x[4] <= 9.4449999332) {
        results[9] = 0;
      }
      else {
        results[9] = 3;
      }
    }
    else {
      results[9] = 0;
    }
  }
  else {
    if (x[8] <= 4.2799999714) {
      results[9] = 2;
    }
    else {
      results[9] = 1;
    }
  }
  if (x[3] <= 6.7400000095) {
    if (x[7] <= 7.5850000381) {
      if (x[7] <= 2.1299999356) {
        results[10] = 0;
      }
      else {
        results[10] = 2;
      }
    }
    else {
      if (x[4] <= 10.6300001144) {
        results[10] = 0;
      }
      else {
        results[10] = 3;
      }
    }
  }
  else {
    results[10] = 1;
  }
  if (x[5] <= -2.9150000811) {
    if (x[11] <= 2.5000000000) {
      results[11] = 0;
    }
    else {
      if (x[2] <= 2.6150000095) {
        results[11] = 2;
      }
      else {
        results[11] = 3;
      }
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[11] = 0;
    }
    else {
      results[11] = 1;
    }
  }
  if (x[5] <= -2.1500000358) {
    if (x[8] <= 3.3700000048) {
      if (x[5] <= -9.5300002098) {
        results[12] = 0;
      }
      else {
        results[12] = 2;
      }
    }
    else {
      if (x[4] <= 11.5799999237) {
        results[12] = 0;
      }
      else {
        results[12] = 3;
      }
    }
  }
  else {
    if (x[8] <= 99.8999996185) {
      results[12] = 1;
    }
    else {
      results[12] = 0;
    }
  }
  if (x[7] <= 119.9600028992) {
    if (x[5] <= -8.5599999428) {
      if (x[6] <= 65.9399995804) {
        results[13] = 3;
      }
      else {
        results[13] = 2;
      }
    }
    else {
      if (x[0] <= 2.0799999833) {
        results[13] = 0;
      }
      else {
        results[13] = 0;
      }
    }
  }
  else {
    results[13] = 1;
  }
  if (x[6] <= 115.8800010681) {
    if (x[9] <= 2.5000000000) {
      results[14] = 0;
    }
    else {
      if (x[4] <= 11.0700001717) {
        results[14] = 0;
      }
      else {
        results[14] = 3;
      }
    }
  }
  else {
    if (x[9] <= 4.0000000000) {
      if (x[4] <= 6.1949999332) {
        results[14] = 1;
      }
      else {
        results[14] = 0;
      }
    }
    else {
      results[14] = 2;
    }
  }
  if (x[0] <= 7.2699999809) {
    if (x[8] <= 316.3899993896) {
      if (x[8] <= 1.4950000048) {
        results[15] = 2;
      }
      else {
        results[15] = 0;
      }
    }
    else {
      results[15] = 3;
    }
  }
  else {
    if (x[1] <= -0.4049999937) {
      results[15] = 1;
    }
    else {
      if (x[9] <= 4.0000000000) {
        results[15] = 1;
      }
      else {
        results[15] = 2;
      }
    }
  }
  if (x[4] <= 11.5799999237) {
    if (x[5] <= -2.1500000358) {
      if (x[9] <= 6.5000000000) {
        results[16] = 0;
      }
      else {
        results[16] = 2;
      }
    }
    else {
      if (x[3] <= 3.4750000536) {
        results[16] = 0;
      }
      else {
        results[16] = 1;
      }
    }
  }
  else {
    results[16] = 3;
  }
  if (x[7] <= 131.3400039673) {
    if (x[4] <= 10.6300001144) {
      if (x[5] <= -9.0700001717) {
        results[17] = 2;
      }
      else {
        results[17] = 0;
      }
    }
    else {
      results[17] = 3;
    }
  }
  else {
    if (x[9] <= 3.5000000000) {
      results[17] = 1;
    }
    else {
      results[17] = 0;
    }
  }
  if (x[8] <= 6.0499997139) {
    if (x[6] <= 58.6149994135) {
      results[18] = 0;
    }
    else {
      results[18] = 2;
    }
  }
  else {
    if (x[8] <= 335.7799987793) {
      if (x[2] <= 7.8650000095) {
        results[18] = 0;
      }
      else {
        results[18] = 1;
      }
    }
    else {
      results[18] = 3;
    }
  }
  if (x[8] <= 316.3899993896) {
    if (x[3] <= 7.1449999809) {
      if (x[0] <= 6.4650001526) {
        results[19] = 0;
      }
      else {
        results[19] = 2;
      }
    }
    else {
      if (x[7] <= 76.4849987030) {
        results[19] = 0;
      }
      else {
        results[19] = 1;
      }
    }
  }
  else {
    results[19] = 3;
  }
  if (x[2] <= 7.8650000095) {
    if (x[4] <= 10.6799998283) {
      if (x[0] <= 5.8050000668) {
        results[20] = 0;
      }
      else {
        results[20] = 2;
      }
    }
    else {
      results[20] = 3;
    }
  }
  else {
    if (x[1] <= 0.1799999969) {
      results[20] = 1;
    }
    else {
      results[20] = 0;
    }
  }
  if (x[3] <= 5.8650000095) {
    if (x[10] <= 2.5000000000) {
      if (x[4] <= 13.5149998665) {
        results[21] = 0;
      }
      else {
        results[21] = 3;
      }
    }
    else {
      if (x[4] <= 1.5799999833) {
        results[21] = 2;
      }
      else {
        results[21] = 3;
      }
    }
  }
  else {
    if (x[8] <= 130.2099971771) {
      results[21] = 1;
    }
    else {
      results[21] = 0;
    }
  }
  if (x[8] <= 298.1949996948) {
    if (x[3] <= 6.6500000954) {
      if (x[4] <= 1.5149999857) {
        results[22] = 2;
      }
      else {
        results[22] = 0;
      }
    }
    else {
      if (x[2] <= 4.8199999332) {
        results[22] = 0;
      }
      else {
        results[22] = 1;
      }
    }
  }
  else {
    results[22] = 3;
  }
  if (x[4] <= 11.5799999237) {
    if (x[3] <= 7.4500000477) {
      if (x[2] <= 2.4750000238) {
        results[23] = 2;
      }
      else {
        results[23] = 0;
      }
    }
    else {
      results[23] = 1;
    }
  }
  else {
    results[23] = 3;
  }
  if (x[0] <= 7.1549999714) {
    if (x[10] <= 2.5000000000) {
      results[24] = 0;
    }
    else {
      if (x[4] <= 7.8849999905) {
        results[24] = 0;
      }
      else {
        results[24] = 3;
      }
    }
  }
  else {
    if (x[7] <= 73.0450029373) {
      if (x[7] <= 3.0099999905) {
        results[24] = 0;
      }
      else {
        results[24] = 2;
      }
    }
    else {
      results[24] = 1;
    }
  }
  if (x[4] <= 1.4849999547) {
    if (x[2] <= 3.3400000334) {
      results[25] = 2;
    }
    else {
      results[25] = 0;
    }
  }
  else {
    if (x[3] <= 6.6500000954) {
      if (x[8] <= 316.3899993896) {
        results[25] = 0;
      }
      else {
        results[25] = 3;
      }
    }
    else {
      if (x[0] <= 5.7749998569) {
        results[25] = 0;
      }
      else {
        results[25] = 1;
      }
    }
  }
  if (x[3] <= 6.6700000763) {
    if (x[0] <= 6.4650001526) {
      if (x[11] <= 2.5000000000) {
        results[26] = 0;
      }
      else {
        results[26] = 3;
      }
    }
    else {
      if (x[11] <= 2.0000000000) {
        results[26] = 0;
      }
      else {
        results[26] = 2;
      }
    }
  }
  else {
    results[26] = 1;
  }
  if (x[5] <= -2.1500000358) {
    if (x[4] <= 1.5799999833) {
      if (x[6] <= 58.1399993896) {
        results[27] = 0;
      }
      else {
        results[27] = 2;
      }
    }
    else {
      if (x[4] <= 11.5799999237) {
        results[27] = 0;
      }
      else {
        results[27] = 3;
      }
    }
  }
  else {
    if (x[6] <= 66.7900009155) {
      results[27] = 0;
    }
    else {
      results[27] = 1;
    }
  }
  if (x[2] <= 7.8650000095) {
    if (x[8] <= 335.7799987793) {
      if (x[0] <= 7.6150000095) {
        results[28] = 0;
      }
      else {
        results[28] = 2;
      }
    }
    else {
      results[28] = 3;
    }
  }
  else {
    if (x[1] <= 0.1799999969) {
      results[28] = 1;
    }
    else {
      results[28] = 0;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[8] <= 335.7799987793) {
      if (x[3] <= 7.7249999046) {
        results[29] = 0;
      }
      else {
        results[29] = 1;
      }
    }
    else {
      results[29] = 3;
    }
  }
  else {
    if (x[7] <= 73.0450029373) {
      if (x[2] <= 2.4350000620) {
        results[29] = 2;
      }
      else {
        results[29] = 0;
      }
    }
    else {
      results[29] = 1;
    }
  }
  if (x[4] <= 11.5799999237) {
    if (x[3] <= 6.4800000191) {
      if (x[9] <= 4.5000000000) {
        results[30] = 0;
      }
      else {
        results[30] = 2;
      }
    }
    else {
      results[30] = 1;
    }
  }
  else {
    results[30] = 3;
  }
  if (x[0] <= 7.6399998665) {
    if (x[6] <= 14.2100000381) {
      if (x[4] <= 8.8399999142) {
        results[31] = 0;
      }
      else {
        results[31] = 3;
      }
    }
    else {
      if (x[11] <= 3.5000000000) {
        results[31] = 0;
      }
      else {
        results[31] = 2;
      }
    }
  }
  else {
    if (x[4] <= 1.9199999571) {
      results[31] = 2;
    }
    else {
      if (x[3] <= 1.2350001335) {
        results[31] = 0;
      }
      else {
        results[31] = 1;
      }
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[10] <= 2.5000000000) {
      if (x[10] <= 1.5000000000) {
        results[32] = 0;
      }
      else {
        results[32] = 0;
      }
    }
    else {
      if (x[9] <= 2.5000000000) {
        results[32] = 0;
      }
      else {
        results[32] = 3;
      }
    }
  }
  else {
    if (x[3] <= 3.4500000924) {
      results[32] = 2;
    }
    else {
      results[32] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    if (x[8] <= 276.7450027466) {
      results[33] = 0;
    }
    else {
      results[33] = 3;
    }
  }
  else {
    if (x[4] <= 1.3949999809) {
      results[33] = 2;
    }
    else {
      if (x[9] <= 1.5000000000) {
        results[33] = 0;
      }
      else {
        results[33] = 1;
      }
    }
  }
  if (x[6] <= 101.3899993896) {
    if (x[11] <= 2.5000000000) {
      results[34] = 0;
    }
    else {
      if (x[3] <= -0.5300000012) {
        results[34] = 3;
      }
      else {
        results[34] = 0;
      }
    }
  }
  else {
    if (x[4] <= 1.4849999547) {
      results[34] = 2;
    }
    else {
      if (x[2] <= 5.0950000286) {
        results[34] = 0;
      }
      else {
        results[34] = 1;
      }
    }
  }
  if (x[8] <= 4.1700000763) {
    if (x[1] <= 2.6299999505) {
      if (x[10] <= 1.5000000000) {
        results[35] = 0;
      }
      else {
        results[35] = 2;
      }
    }
    else {
      results[35] = 0;
    }
  }
  else {
    if (x[0] <= 7.6349999905) {
      if (x[8] <= 316.3899993896) {
        results[35] = 0;
      }
      else {
        results[35] = 3;
      }
    }
    else {
      results[35] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 316.3899993896) {
      if (x[8] <= 5.4900000095) {
        results[36] = 2;
      }
      else {
        results[36] = 0;
      }
    }
    else {
      results[36] = 3;
    }
  }
  else {
    if (x[11] <= 1.5000000000) {
      results[36] = 0;
    }
    else {
      results[36] = 1;
    }
  }
  if (x[4] <= 12.0199999809) {
    if (x[9] <= 4.5000000000) {
      if (x[0] <= 7.6099998951) {
        results[37] = 0;
      }
      else {
        results[37] = 1;
      }
    }
    else {
      if (x[5] <= -8.4200000763) {
        results[37] = 2;
      }
      else {
        results[37] = 0;
      }
    }
  }
  else {
    results[37] = 3;
  }
  if (x[3] <= 7.1649999619) {
    if (x[9] <= 6.5000000000) {
      if (x[4] <= 11.5799999237) {
        results[38] = 0;
      }
      else {
        results[38] = 3;
      }
    }
    else {
      if (x[0] <= 4.0200001001) {
        results[38] = 0;
      }
      else {
        results[38] = 2;
      }
    }
  }
  else {
    results[38] = 1;
  }
  if (x[3] <= 7.1649999619) {
    if (x[8] <= 246.4350051880) {
      if (x[10] <= 2.5000000000) {
        results[39] = 0;
      }
      else {
        results[39] = 2;
      }
    }
    else {
      results[39] = 3;
    }
  }
  else {
    if (x[9] <= 1.5000000000) {
      results[39] = 0;
    }
    else {
      results[39] = 1;
    }
  }
  if (x[0] <= 6.4650001526) {
    if (x[6] <= 20.9400005341) {
      if (x[4] <= 9.3349997997) {
        results[40] = 0;
      }
      else {
        results[40] = 3;
      }
    }
    else {
      results[40] = 0;
    }
  }
  else {
    if (x[3] <= 4.1850001216) {
      if (x[4] <= 3.8599999547) {
        results[40] = 2;
      }
      else {
        results[40] = 0;
      }
    }
    else {
      results[40] = 1;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[6] <= 114.9650001526) {
      if (x[8] <= 302.0599899292) {
        results[41] = 0;
      }
      else {
        results[41] = 3;
      }
    }
    else {
      if (x[5] <= -7.9950001240) {
        results[41] = 2;
      }
      else {
        results[41] = 0;
      }
    }
  }
  else {
    if (x[5] <= -4.9800001383) {
      results[41] = 0;
    }
    else {
      results[41] = 1;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[11] <= 2.5000000000) {
      results[42] = 0;
    }
    else {
      if (x[7] <= 10.7249999046) {
        results[42] = 2;
      }
      else {
        results[42] = 3;
      }
    }
  }
  else {
    if (x[3] <= 1.9250000715) {
      results[42] = 0;
    }
    else {
      results[42] = 1;
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[4] <= 11.0700001717) {
      if (x[6] <= 114.2150001526) {
        results[43] = 0;
      }
      else {
        results[43] = 2;
      }
    }
    else {
      results[43] = 3;
    }
  }
  else {
    results[43] = 1;
  }
  if (x[8] <= 337.8399963379) {
    if (x[8] <= 4.3350000381) {
      if (x[0] <= 3.8400000334) {
        results[44] = 0;
      }
      else {
        results[44] = 2;
      }
    }
    else {
      if (x[0] <= 6.8199999332) {
        results[44] = 0;
      }
      else {
        results[44] = 1;
      }
    }
  }
  else {
    results[44] = 3;
  }
  if (x[0] <= 6.7899999619) {
    if (x[5] <= -6.0250000954) {
      if (x[7] <= 2.9200000763) {
        results[45] = 0;
      }
      else {
        results[45] = 3;
      }
    }
    else {
      results[45] = 0;
    }
  }
  else {
    if (x[3] <= 4.2350000739) {
      if (x[8] <= 20.8500008583) {
        results[45] = 2;
      }
      else {
        results[45] = 0;
      }
    }
    else {
      results[45] = 1;
    }
  }
  if (x[7] <= 130.8749961853) {
    if (x[10] <= 1.5000000000) {
      results[46] = 0;
    }
    else {
      if (x[0] <= 6.0499999523) {
        results[46] = 3;
      }
      else {
        results[46] = 2;
      }
    }
  }
  else {
    if (x[6] <= 57.7450008392) {
      results[46] = 0;
    }
    else {
      results[46] = 1;
    }
  }
  if (x[0] <= 6.4650001526) {
    if (x[11] <= 2.5000000000) {
      results[47] = 0;
    }
    else {
      if (x[0] <= 0.7999999821) {
        results[47] = 0;
      }
      else {
        results[47] = 3;
      }
    }
  }
  else {
    if (x[5] <= -4.3249999881) {
      if (x[9] <= 4.0000000000) {
        results[47] = 0;
      }
      else {
        results[47] = 2;
      }
    }
    else {
      results[47] = 1;
    }
  }
  if (x[3] <= 6.4600000381) {
    if (x[8] <= 269.0850067139) {
      if (x[9] <= 4.5000000000) {
        results[48] = 0;
      }
      else {
        results[48] = 2;
      }
    }
    else {
      results[48] = 3;
    }
  }
  else {
    if (x[5] <= 0.2000000179) {
      results[48] = 1;
    }
    else {
      results[48] = 0;
    }
  }
  if (x[7] <= 150.5899963379) {
    if (x[8] <= 316.3899993896) {
      if (x[8] <= 4.3350000381) {
        results[49] = 2;
      }
      else {
        results[49] = 0;
      }
    }
    else {
      results[49] = 3;
    }
  }
  else {
    if (x[0] <= 4.4449999332) {
      results[49] = 0;
    }
    else {
      results[49] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[8] <= 316.3899993896) {
      if (x[2] <= 7.8650000095) {
        results[50] = 0;
      }
      else {
        results[50] = 0;
      }
    }
    else {
      results[50] = 3;
    }
  }
  else {
    if (x[9] <= 4.0000000000) {
      results[50] = 1;
    }
    else {
      results[50] = 2;
    }
  }
  if (x[2] <= 7.4149999619) {
    if (x[6] <= 114.2150001526) {
      if (x[0] <= 2.8250000477) {
        results[51] = 3;
      }
      else {
        results[51] = 0;
      }
    }
    else {
      results[51] = 2;
    }
  }
  else {
    if (x[10] <= 1.5000000000) {
      results[51] = 0;
    }
    else {
      results[51] = 1;
    }
  }
  if (x[6] <= 99.8100013733) {
    if (x[6] <= 20.9400005341) {
      if (x[4] <= 11.5399999619) {
        results[52] = 0;
      }
      else {
        results[52] = 3;
      }
    }
    else {
      results[52] = 0;
    }
  }
  else {
    if (x[4] <= 1.4849999547) {
      results[52] = 2;
    }
    else {
      results[52] = 1;
    }
  }
  if (x[4] <= 12.0199999809) {
    if (x[1] <= -0.4749999940) {
      if (x[0] <= 7.6349999905) {
        results[53] = 0;
      }
      else {
        results[53] = 1;
      }
    }
    else {
      if (x[6] <= 102.6250000000) {
        results[53] = 0;
      }
      else {
        results[53] = 2;
      }
    }
  }
  else {
    results[53] = 3;
  }
  if (x[3] <= 7.1449999809) {
    if (x[9] <= 3.5000000000) {
      if (x[0] <= 2.6250000000) {
        results[54] = 0;
      }
      else {
        results[54] = 0;
      }
    }
    else {
      if (x[6] <= 74.5100002289) {
        results[54] = 3;
      }
      else {
        results[54] = 2;
      }
    }
  }
  else {
    results[54] = 1;
  }
  if (x[4] <= 11.5799999237) {
    if (x[3] <= 6.6500000954) {
      if (x[0] <= 6.4650001526) {
        results[55] = 0;
      }
      else {
        results[55] = 2;
      }
    }
    else {
      if (x[7] <= 71.3100032806) {
        results[55] = 0;
      }
      else {
        results[55] = 1;
      }
    }
  }
  else {
    results[55] = 3;
  }
  if (x[3] <= 7.1449999809) {
    if (x[8] <= 335.7799987793) {
      if (x[5] <= -9.1000003815) {
        results[56] = 2;
      }
      else {
        results[56] = 0;
      }
    }
    else {
      results[56] = 3;
    }
  }
  else {
    results[56] = 1;
  }
  if (x[8] <= 296.1350021362) {
    if (x[0] <= 7.6349999905) {
      if (x[9] <= 7.0000000000) {
        results[57] = 0;
      }
      else {
        results[57] = 2;
      }
    }
    else {
      if (x[2] <= 4.8199999332) {
        results[57] = 2;
      }
      else {
        results[57] = 1;
      }
    }
  }
  else {
    results[57] = 3;
  }
  if (x[6] <= 125.0900001526) {
    if (x[4] <= 11.5799999237) {
      results[58] = 0;
    }
    else {
      results[58] = 3;
    }
  }
  else {
    if (x[5] <= -4.5049999952) {
      if (x[5] <= -7.9849998951) {
        results[58] = 2;
      }
      else {
        results[58] = 0;
      }
    }
    else {
      results[58] = 1;
    }
  }
  if (x[3] <= 7.1649999619) {
    if (x[6] <= 114.9650001526) {
      if (x[4] <= 11.0700001717) {
        results[59] = 0;
      }
      else {
        results[59] = 3;
      }
    }
    else {
      if (x[7] <= 12.6549997330) {
        results[59] = 2;
      }
      else {
        results[59] = 0;
      }
    }
  }
  else {
    if (x[5] <= 0.2000000179) {
      results[59] = 1;
    }
    else {
      results[59] = 0;
    }
  }
  if (x[7] <= 111.7800025940) {
    if (x[4] <= 12.0199999809) {
      if (x[6] <= 114.9650001526) {
        results[60] = 0;
      }
      else {
        results[60] = 2;
      }
    }
    else {
      results[60] = 3;
    }
  }
  else {
    if (x[3] <= 3.4600000530) {
      results[60] = 0;
    }
    else {
      results[60] = 1;
    }
  }
  if (x[5] <= -2.3200000525) {
    if (x[4] <= 1.5149999857) {
      results[61] = 2;
    }
    else {
      if (x[9] <= 3.5000000000) {
        results[61] = 0;
      }
      else {
        results[61] = 3;
      }
    }
  }
  else {
    if (x[0] <= 5.8099999428) {
      results[61] = 0;
    }
    else {
      results[61] = 1;
    }
  }
  if (x[4] <= 11.5799999237) {
    if (x[8] <= 3.3700000048) {
      results[62] = 2;
    }
    else {
      if (x[11] <= 2.5000000000) {
        results[62] = 0;
      }
      else {
        results[62] = 1;
      }
    }
  }
  else {
    results[62] = 3;
  }
  if (x[7] <= 131.3400039673) {
    if (x[4] <= 11.1199998856) {
      if (x[9] <= 4.5000000000) {
        results[63] = 0;
      }
      else {
        results[63] = 2;
      }
    }
    else {
      results[63] = 3;
    }
  }
  else {
    if (x[1] <= 0.9399999790) {
      results[63] = 1;
    }
    else {
      results[63] = 0;
    }
  }
  if (x[4] <= 10.6799998283) {
    if (x[0] <= 6.4650001526) {
      results[64] = 0;
    }
    else {
      if (x[3] <= 6.4750001431) {
        results[64] = 2;
      }
      else {
        results[64] = 1;
      }
    }
  }
  else {
    results[64] = 3;
  }
  if (x[7] <= 131.3400039673) {
    if (x[11] <= 2.5000000000) {
      results[65] = 0;
    }
    else {
      if (x[8] <= 174.4500064850) {
        results[65] = 0;
      }
      else {
        results[65] = 3;
      }
    }
  }
  else {
    if (x[5] <= -5.0150000453) {
      results[65] = 0;
    }
    else {
      results[65] = 1;
    }
  }
  if (x[0] <= 7.6349999905) {
    if (x[10] <= 2.5000000000) {
      if (x[2] <= 7.8650000095) {
        results[66] = 0;
      }
      else {
        results[66] = 0;
      }
    }
    else {
      if (x[8] <= 177.0300064087) {
        results[66] = 0;
      }
      else {
        results[66] = 3;
      }
    }
  }
  else {
    if (x[2] <= 4.8199999332) {
      if (x[1] <= 1.1099999994) {
        results[66] = 2;
      }
      else {
        results[66] = 0;
      }
    }
    else {
      results[66] = 1;
    }
  }
  if (x[7] <= 142.1549987793) {
    if (x[8] <= 335.7799987793) {
      if (x[5] <= -9.1000003815) {
        results[67] = 2;
      }
      else {
        results[67] = 0;
      }
    }
    else {
      results[67] = 3;
    }
  }
  else {
    if (x[1] <= 0.9649999784) {
      results[67] = 1;
    }
    else {
      results[67] = 0;
    }
  }
  if (x[2] <= 6.2500000000) {
    if (x[4] <= 12.6250000000) {
      if (x[6] <= 102.1349983215) {
        results[68] = 0;
      }
      else {
        results[68] = 2;
      }
    }
    else {
      results[68] = 3;
    }
  }
  else {
    if (x[5] <= -4.9800001383) {
      results[68] = 0;
    }
    else {
      if (x[8] <= 41.9700012207) {
        results[68] = 1;
      }
      else {
        results[68] = 0;
      }
    }
  }
  if (x[3] <= 7.1449999809) {
    if (x[7] <= 10.4600000381) {
      if (x[0] <= 5.8050000668) {
        results[69] = 0;
      }
      else {
        results[69] = 2;
      }
    }
    else {
      if (x[6] <= 12.8299999237) {
        results[69] = 3;
      }
      else {
        results[69] = 0;
      }
    }
  }
  else {
    results[69] = 1;
  }
  if (x[3] <= 7.1449999809) {
    if (x[4] <= 1.5149999857) {
      if (x[6] <= 61.3350006342) {
        results[70] = 0;
      }
      else {
        results[70] = 2;
      }
    }
    else {
      if (x[4] <= 12.0199999809) {
        results[70] = 0;
      }
      else {
        results[70] = 3;
      }
    }
  }
  else {
    if (x[5] <= 0.3000000119) {
      results[70] = 1;
    }
    else {
      results[70] = 0;
    }
  }
  if (x[7] <= 131.3400039673) {
    if (x[6] <= 114.9650001526) {
      if (x[8] <= 296.1350021362) {
        results[71] = 0;
      }
      else {
        results[71] = 3;
      }
    }
    else {
      if (x[1] <= 1.1400000006) {
        results[71] = 2;
      }
      else {
        results[71] = 0;
      }
    }
  }
  else {
    if (x[6] <= 68.9750003815) {
      results[71] = 0;
    }
    else {
      results[71] = 1;
    }
  }
  if (x[4] <= 1.5799999833) {
    if (x[7] <= 18.0600004196) {
      results[72] = 2;
    }
    else {
      results[72] = 0;
    }
  }
  else {
    if (x[6] <= 112.7500000000) {
      if (x[10] <= 2.5000000000) {
        results[72] = 0;
      }
      else {
        results[72] = 3;
      }
    }
    else {
      if (x[1] <= 0.9400000023) {
        results[72] = 1;
      }
      else {
        results[72] = 0;
      }
    }
  }
  if (x[8] <= 4.2799999714) {
    if (x[6] <= 58.6149994135) {
      results[73] = 0;
    }
    else {
      results[73] = 2;
    }
  }
  else {
    if (x[4] <= 9.5749998093) {
      if (x[4] <= 4.5499999523) {
        results[73] = 1;
      }
      else {
        results[73] = 0;
      }
    }
    else {
      results[73] = 3;
    }
  }
  if (x[6] <= 99.8100013733) {
    if (x[5] <= -7.1600000858) {
      if (x[8] <= 176.2450065613) {
        results[74] = 0;
      }
      else {
        results[74] = 3;
      }
    }
    else {
      results[74] = 0;
    }
  }
  else {
    if (x[1] <= -1.0300000012) {
      if (x[9] <= 1.5000000000) {
        results[74] = 0;
      }
      else {
        results[74] = 1;
      }
    }
    else {
      if (x[8] <= 7.0799999237) {
        results[74] = 2;
      }
      else {
        results[74] = 1;
      }
    }
  }
  if (x[4] <= 12.0199999809) {
    if (x[3] <= 7.1449999809) {
      if (x[6] <= 114.9650001526) {
        results[75] = 0;
      }
      else {
        results[75] = 2;
      }
    }
    else {
      results[75] = 1;
    }
  }
  else {
    results[75] = 3;
  }
  if (x[8] <= 316.3899993896) {
    if (x[3] <= 7.1449999809) {
      if (x[11] <= 4.5000000000) {
        results[76] = 0;
      }
      else {
        results[76] = 2;
      }
    }
    else {
      results[76] = 1;
    }
  }
  else {
    results[76] = 3;
  }
  if (x[7] <= 131.3400039673) {
    if (x[8] <= 269.0850067139) {
      if (x[5] <= -8.7449998856) {
        results[77] = 2;
      }
      else {
        results[77] = 0;
      }
    }
    else {
      results[77] = 3;
    }
  }
  else {
    if (x[5] <= -4.9250000119) {
      results[77] = 0;
    }
    else {
      results[77] = 1;
    }
  }
  if (x[4] <= 12.0199999809) {
    if (x[6] <= 114.9650001526) {
      if (x[0] <= 6.8199999332) {
        results[78] = 0;
      }
      else {
        results[78] = 0;
      }
    }
    else {
      if (x[2] <= 4.7399998903) {
        results[78] = 2;
      }
      else {
        results[78] = 1;
      }
    }
  }
  else {
    results[78] = 3;
  }
  if (x[7] <= 119.9600028992) {
    if (x[6] <= 114.2150001526) {
      if (x[8] <= 276.7450027466) {
        results[79] = 0;
      }
      else {
        results[79] = 3;
      }
    }
    else {
      if (x[8] <= 56.1899981499) {
        results[79] = 2;
      }
      else {
        results[79] = 0;
      }
    }
  }
  else {
    if (x[3] <= 1.9250000715) {
      results[79] = 0;
    }
    else {
      results[79] = 1;
    }
  }
  if (x[2] <= 7.8299999237) {
    if (x[11] <= 2.5000000000) {
      results[80] = 0;
    }
    else {
      if (x[6] <= 114.2150001526) {
        results[80] = 3;
      }
      else {
        results[80] = 2;
      }
    }
  }
  else {
    if (x[5] <= -4.8100001216) {
      results[80] = 0;
    }
    else {
      results[80] = 1;
    }
  }
  if (x[8] <= 276.7450027466) {
    if (x[5] <= -3.3600000143) {
      if (x[9] <= 4.5000000000) {
        results[81] = 0;
      }
      else {
        results[81] = 2;
      }
    }
    else {
      if (x[0] <= 5.8049998283) {
        results[81] = 0;
      }
      else {
        results[81] = 1;
      }
    }
  }
  else {
    results[81] = 3;
  }
  if (x[9] <= 3.5000000000) {
    if (x[2] <= 6.5250000954) {
      if (x[4] <= 13.5349998474) {
        results[82] = 0;
      }
      else {
        results[82] = 3;
      }
    }
    else {
      if (x[0] <= 5.8099999428) {
        results[82] = 0;
      }
      else {
        results[82] = 1;
      }
    }
  }
  else {
    if (x[6] <= 64.4599995613) {
      if (x[2] <= 4.0400000811) {
        results[82] = 3;
      }
      else {
        results[82] = 0;
      }
    }
    else {
      results[82] = 2;
    }
  }
  if (x[10] <= 1.5000000000) {
    results[83] = 0;
  }
  else {
    if (x[7] <= 92.2749977112) {
      if (x[2] <= 2.1150000095) {
        results[83] = 2;
      }
      else {
        results[83] = 3;
      }
    }
    else {
      results[83] = 1;
    }
  }
  if (x[2] <= 6.1099998951) {
    if (x[0] <= 6.2850000858) {
      if (x[4] <= 11.5799999237) {
        results[84] = 0;
      }
      else {
        results[84] = 3;
      }
    }
    else {
      if (x[0] <= 9.4949998856) {
        results[84] = 2;
      }
      else {
        results[84] = 2;
      }
    }
  }
  else {
    if (x[0] <= 7.1549999714) {
      results[84] = 0;
    }
    else {
      if (x[5] <= -5.0749999881) {
        results[84] = 0;
      }
      else {
        results[84] = 1;
      }
    }
  }
  if (x[0] <= 6.4650001526) {
    if (x[9] <= 2.5000000000) {
      results[85] = 0;
    }
    else {
      if (x[4] <= 10.4949998856) {
        results[85] = 0;
      }
      else {
        results[85] = 3;
      }
    }
  }
  else {
    if (x[7] <= 111.3199996948) {
      if (x[11] <= 3.5000000000) {
        results[85] = 0;
      }
      else {
        results[85] = 2;
      }
    }
    else {
      results[85] = 1;
    }
  }
  if (x[6] <= 114.9650001526) {
    if (x[9] <= 2.5000000000) {
      results[86] = 0;
    }
    else {
      if (x[2] <= 6.1349999905) {
        results[86] = 3;
      }
      else {
        results[86] = 0;
      }
    }
  }
  else {
    if (x[8] <= 4.2799999714) {
      results[86] = 2;
    }
    else {
      results[86] = 1;
    }
  }
  if (x[6] <= 75.7950000763) {
    if (x[5] <= -8.2350001335) {
      if (x[8] <= 173.7450065613) {
        results[87] = 0;
      }
      else {
        results[87] = 3;
      }
    }
    else {
      results[87] = 0;
    }
  }
  else {
    if (x[4] <= 1.4849999547) {
      results[87] = 2;
    }
    else {
      if (x[5] <= -5.2450000048) {
        results[87] = 0;
      }
      else {
        results[87] = 1;
      }
    }
  }
  if (x[10] <= 1.5000000000) {
    results[88] = 0;
  }
  else {
    if (x[2] <= 5.7149999142) {
      if (x[6] <= 78.6099987030) {
        results[88] = 3;
      }
      else {
        results[88] = 2;
      }
    }
    else {
      results[88] = 1;
    }
  }
  if (x[8] <= 5.3250000477) {
    if (x[6] <= 102.6250000000) {
      results[89] = 0;
    }
    else {
      results[89] = 2;
    }
  }
  else {
    if (x[8] <= 276.7450027466) {
      if (x[10] <= 1.5000000000) {
        results[89] = 0;
      }
      else {
        results[89] = 1;
      }
    }
    else {
      results[89] = 3;
    }
  }
  if (x[8] <= 3.3700000048) {
    results[90] = 2;
  }
  else {
    if (x[6] <= 99.8100013733) {
      if (x[5] <= -8.2350001335) {
        results[90] = 3;
      }
      else {
        results[90] = 0;
      }
    }
    else {
      if (x[3] <= 3.2900000811) {
        results[90] = 0;
      }
      else {
        results[90] = 1;
      }
    }
  }
  if (x[9] <= 3.5000000000) {
    if (x[7] <= 136.5149993896) {
      if (x[9] <= 2.5000000000) {
        results[91] = 0;
      }
      else {
        results[91] = 3;
      }
    }
    else {
      results[91] = 1;
    }
  }
  else {
    if (x[0] <= 5.1449999809) {
      if (x[3] <= -0.4999999851) {
        results[91] = 3;
      }
      else {
        results[91] = 0;
      }
    }
    else {
      results[91] = 2;
    }
  }
  if (x[2] <= 7.8650000095) {
    if (x[4] <= 10.6300001144) {
      if (x[9] <= 4.5000000000) {
        results[92] = 0;
      }
      else {
        results[92] = 2;
      }
    }
    else {
      results[92] = 3;
    }
  }
  else {
    if (x[1] <= 0.1799999969) {
      results[92] = 1;
    }
    else {
      results[92] = 0;
    }
  }
  if (x[5] <= -2.4300000668) {
    if (x[8] <= 221.9450073242) {
      if (x[9] <= 4.5000000000) {
        results[93] = 0;
      }
      else {
        results[93] = 2;
      }
    }
    else {
      results[93] = 3;
    }
  }
  else {
    if (x[8] <= 103.1600017548) {
      results[93] = 1;
    }
    else {
      results[93] = 0;
    }
  }
  if (x[5] <= -2.3200000525) {
    if (x[8] <= 316.3899993896) {
      if (x[6] <= 114.2150001526) {
        results[94] = 0;
      }
      else {
        results[94] = 2;
      }
    }
    else {
      results[94] = 3;
    }
  }
  else {
    if (x[2] <= 6.1099998951) {
      results[94] = 0;
    }
    else {
      if (x[5] <= 3.7050001025) {
        results[94] = 1;
      }
      else {
        results[94] = 0;
      }
    }
  }
  if (x[0] <= 6.2850000858) {
    if (x[8] <= 335.7799987793) {
      results[95] = 0;
    }
    else {
      results[95] = 3;
    }
  }
  else {
    if (x[7] <= 100.0000038147) {
      if (x[9] <= 4.0000000000) {
        results[95] = 0;
      }
      else {
        results[95] = 2;
      }
    }
    else {
      results[95] = 1;
    }
  }
  if (x[4] <= 1.3999999762) {
    if (x[5] <= -9.5300002098) {
      results[96] = 0;
    }
    else {
      results[96] = 2;
    }
  }
  else {
    if (x[3] <= 6.4600000381) {
      if (x[9] <= 4.5000000000) {
        results[96] = 0;
      }
      else {
        results[96] = 3;
      }
    }
    else {
      if (x[6] <= 69.6600008011) {
        results[96] = 0;
      }
      else {
        results[96] = 1;
      }
    }
  }
  if (x[4] <= 11.5799999237) {
    if (x[3] <= 6.6500000954) {
      if (x[0] <= 7.6449999809) {
        results[97] = 0;
      }
      else {
        results[97] = 2;
      }
    }
    else {
      results[97] = 1;
    }
  }
  else {
    results[97] = 3;
  }
  if (x[7] <= 119.9600028992) {
    if (x[7] <= 9.8350000381) {
      if (x[4] <= 1.5149999857) {
        results[98] = 2;
      }
      else {
        results[98] = 0;
      }
    }
    else {
      if (x[8] <= 241.3350067139) {
        results[98] = 0;
      }
      else {
        results[98] = 3;
      }
    }
  }
  else {
    if (x[3] <= 3.2850000858) {
      results[98] = 0;
    }
    else {
      results[98] = 1;
    }
  }
  if (x[6] <= 115.8800010681) {
    if (x[4] <= 11.5799999237) {
      results[99] = 0;
    }
    else {
      results[99] = 3;
    }
  }
  else {
    if (x[5] <= -5.6399999857) {
      results[99] = 2;
    }
    else {
      results[99] = 1;
    }
  }
  int classes_amount = 0;
  for(int i=0; i<100; i++){
  	if(results[i]+1 > classes_amount) classes_amount = results[i]+1;  }
  int result_class = -1;
  int max_apperance = 0;
  for(int i=0; i<classes_amount; i++){
   int apperance = 0;
  	for(int j=0; j<100; j++) if(results[j] == i) apperance++;
  	if(apperance > max_apperance){
  		max_apperance = apperance;
  		result_class = i;
  	}
  }
  return result_class;
}

