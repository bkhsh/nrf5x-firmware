/**
 *  isr_manager.c : File to handle and share ISRs as required.
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

#ifndef TEMPLATE_ISR_MANAGE_H
#define TEMPLATE_ISR_MANAGE_H

//Drivers for hal level Irq management
void hal_gpio_Handler (void);

void hal_saadc_Handler (void);

void hal_spim_Handler (void);

void hal_twim_Handler (void);

void hal_uart_Handler (void);

void hal_wdt_Handler (void);


//Declaration for peripheral level Irq
void ble_adv_radio_Handler (void);

void button_ui_gpiote_Handler (void);

void rf_comm_gpiote_Handler (void);

void ms_timer_rtc_Handler (void);

void uart_printf_uart_Handler (void);

void evt_sd_handler_swi_Handler (void);

void sensebe_ble_swi_Handler (void);

void radio_trigger_timer_Handler (void);

#endif //TEMPLATE_ISR_MANAGE_H
