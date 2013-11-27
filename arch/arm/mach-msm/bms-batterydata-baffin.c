/* Copyright (c) 2011-2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/mfd/pm8xxx/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2092, 2090, 2087, 2085, 2082},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 31,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{823, 207, 100, 89, 91},
				{831, 215, 102, 90, 92},
				{831, 215, 102, 90, 92},
				{817, 224, 105, 93, 93},
				{803, 230, 108, 94, 94},
				{789, 225, 113, 98, 96},
				{783, 218, 120, 101, 98},
				{780, 212, 130, 106, 101},
				{783, 208, 132, 116, 107},
				{787, 208, 106, 100, 99},
				{796, 208, 101, 92, 93},
				{815, 209, 102, 93, 94},
				{850, 211, 103, 95, 97},
				{899, 213, 105, 97, 100},
				{971, 219, 107, 96, 100},
				{1078, 225, 110, 95, 97},
				{1219, 220, 106, 93, 96},
				{1345, 218, 105, 93, 96},
				{1552, 229, 101, 91, 94},
				{1736, 245, 102, 92, 95},
				{1766, 252, 103, 93, 96},
				{2005, 263, 105, 95, 97},
				{2442, 284, 107, 96, 99},
				{3139, 320, 111, 98, 101},
				{4306, 380, 116, 101, 103},
				{6281, 494, 119, 103, 102},
				{9993, 738, 117, 100, 99},
				{16955, 1179, 118, 100, 101},
				{29342, 1875, 128, 108, 110},
				{55272, 9100, 164, 136, 155},
			
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4333, 4329, 4324, 4318, 4310},
				{4248, 4255, 4254, 4251, 4245},
				{4177, 4193, 4194, 4192, 4186},
				{4108, 4135, 4137, 4135, 4130},
				{4045, 4078, 4084, 4082, 4077},
				{3988, 4021, 4034, 4033, 4027},
				{3939, 3967, 3989, 3988, 3983},
				{3896, 3921, 3949, 3948, 3944},
				{3859, 3883, 3908, 3912, 3908},
				{3827, 3852, 3857, 3860, 3858},
				{3798, 3826, 3827, 3827, 3825},
				{3778, 3804, 3805, 3805, 3802},
				{3764, 3786, 3788, 3788, 3785},
				{3750, 3771, 3774, 3773, 3771},
				{3737, 3761, 3765, 3761, 3755},
				{3721, 3749, 3755, 3747, 3734},
				{3701, 3725, 3735, 3725, 3711},
				{3680, 3703, 3706, 3697, 3683},
				{3661, 3690, 3679, 3671, 3660},
				{3644, 3681, 3670, 3663, 3651},
				{3634, 3676, 3668, 3661, 3649},
				{3623, 3671, 3665, 3658, 3646},
				{3610, 3666, 3662, 3655, 3644},
				{3593, 3659, 3658, 3651, 3640},
				{3573, 3649, 3652, 3646, 3633},
				{3547, 3632, 3641, 3632, 3614},
				{3512, 3599, 3609, 3598, 3570},
				{3463, 3545, 3552, 3540, 3509},
				{3387, 3463, 3473, 3461, 3426},
				{3238, 3332, 3360, 3349, 3306},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data Samsung_8930_Serrano_1900mAh_data = {
	.fcc				= 2100,
	.fcc_temp_lut		= &fcc_temp,
	.fcc_sf_lut			= &fcc_sf,
	.pc_temp_ocv_lut	= &pc_temp_ocv,
	.rbatt_sf_lut		= &rbatt_sf,
	.default_rbatt_mohm	= 159
};
