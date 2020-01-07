/*
 *  random_num.c : <Write brief>
 *  Copyright (C) 2019  Appiko
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "random_num.h"
#include "nrf52.h"
#include "nrf52810_bitfields.h"

uint8_t random_num_generate ()
{
    uint8_t ret_rand;
    NRF_RNG->CONFIG = RNG_CONFIG_DERCEN_Enabled;
    NRF_RNG->TASKS_START = 1;
    while(NRF_RNG->EVENTS_VALRDY);
    ret_rand = NRF_RNG->VALUE;
    NRF_RNG->TASKS_STOP = 1;
    NRF_RNG->CONFIG = RNG_CONFIG_DERCEN_Disabled;
    return ret_rand;
}
