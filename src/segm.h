/*
pcboot - bootable PC demo/game kernel
Copyright (C) 2018  John Tsiombikas <nuclear@member.fsf.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY, without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef SEGM_H_
#define SEGM_H_

#define SEGM_KCODE	1
#define SEGM_KDATA	2
#define SEGM_UCODE	3
#define SEGM_UDATA	4
#define SEGM_TASK	5

#ifndef ASM
void init_segm(void);

uint16_t selector(int idx, int rpl);

void set_tss(uint32_t addr);
#endif	/* ASM */


#endif	/* SEGM_H_ */
