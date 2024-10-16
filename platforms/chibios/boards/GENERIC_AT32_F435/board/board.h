/*
    Copyright (C) Zhaqian

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

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup board.
 */

/*
 * Board identifier.
 */
#define BOARD_AT32F435_7xx
#define BOARD_AT32F435
#define BOARD_NAME              "AT32F435"

#define AT32F435CCU7

#if !defined(AT32F435_7xx)
#define AT32F435_7xx
#endif

/*
 * Board oscillators-related settings.
 */
#if !defined(AT32_LEXTCLK)
#define AT32_LEXTCLK                32768U
#endif

#if !defined(AT32_HEXTCLK)
#define AT32_HEXTCLK                8000000U
#endif

/*
 * IO pins assignments.
 */
#define GPIOA_PIN0                  0U
#define GPIOA_PIN1                  1U
#define GPIOA_PIN2                  2U
#define GPIOA_PIN3                  3U
#define GPIOA_PIN4                  4U
#define GPIOA_PIN5                  5U
#define GPIOA_PIN6                  6U
#define GPIOA_PIN7                  7U
#define GPIOA_PIN8                  8U
#define GPIOA_PIN9                  9U
#define GPIOA_PIN10                 10U
#define GPIOA_PIN11                 11U
#define GPIOA_PIN12                 12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_PIN15                 15U

#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_PIN3                  3U
#define GPIOB_PIN4                  4U
#define GPIOB_PIN5                  5U
#define GPIOB_PIN6                  6U
#define GPIOB_PIN7                  7U
#define GPIOB_PIN8                  8U
#define GPIOB_PIN9                  9U
#define GPIOB_PIN10                 10U
#define GPIOB_PIN11                 11U
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_PIN0                  0U
#define GPIOC_PIN1                  1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_PIN7                  7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_PIN0                  0U
#define GPIOF_PIN1                  1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

#define GPIOG_PIN0                  0U
#define GPIOG_PIN1                  1U
#define GPIOG_PIN2                  2U
#define GPIOG_PIN3                  3U
#define GPIOG_PIN4                  4U
#define GPIOG_PIN5                  5U
#define GPIOG_PIN6                  6U
#define GPIOG_PIN7                  7U
#define GPIOG_PIN8                  8U
#define GPIOG_PIN9                  9U
#define GPIOG_PIN10                 10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_PIN13                 13U
#define GPIOG_PIN14                 14U
#define GPIOG_PIN15                 15U

#define GPIOH_PIN0                  0U
#define GPIOH_PIN1                  1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the AT32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODT_LOW(n)              (0U << (n))
#define PIN_ODT_HIGH(n)             (1U << (n))
#define PIN_OMODE_PUSHPULL(n)       (0U << (n))
#define PIN_OMODE_OPENDRAIN(n)      (1U << (n))
#define PIN_ODRVR_STRONGER(n)       (1U << ((n) * 2U))
#define PIN_ODRVR_MODERATE(n)       (3U << ((n) * 2U))
#define PIN_PULL_FLOATING(n)        (0U << ((n) * 2U))
#define PIN_PULL_PULLUP(n)          (1U << ((n) * 2U))
#define PIN_PULL_PULLDOWN(n)        (2U << ((n) * 2U))
#define PIN_MUX(n, v)               ((v) << (((n) % 8U) * 4U))
#define PIN_HDRV_NORMAL(n)          (0U << (n))
#define PIN_HDRV_STRONGEST(n)       (1U << (n))

/*
 * GPIOA setup:
 *
 * PA0  - PIN0                      (input pullup).
 * PA1  - PIN1                      (input pullup).
 * PA2  - PIN2                      (input pullup).
 * PA3  - PIN3                      (input pullup).
 * PA4  - PIN4                      (input pullup).
 * PA5  - PIN5                      (input pullup).
 * PA6  - PIN6                      (input pullup).
 * PA7  - PIN7                      (input pullup).
 * PA8  - PIN8                      (input pullup).
 * PA9  - PIN9                      (input pullup).
 * PA10 - PIN10                     (input pullup).
 * PA11 - PIN11                     (input pullup).
 * PA12 - PIN12                     (input pullup).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - PIN15                     (input pullup).
 */
#define VAL_GPIOA_CFGR              (PIN_MODE_INPUT(GPIOA_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN12) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OMODE             (PIN_OMODE_PUSHPULL(GPIOA_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OMODE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OMODE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_ODRVR             (PIN_ODRVR_STRONGER(GPIOA_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOA_SWDIO) |      \
                                     PIN_ODRVR_STRONGER(GPIOA_SWCLK) |      \
                                     PIN_ODRVR_STRONGER(GPIOA_PIN15))
#define VAL_GPIOA_PULL              (PIN_PULL_PULLUP(GPIOA_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOA_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOA_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOA_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOA_SWDIO) |         \
                                     PIN_PULL_PULLUP(GPIOA_SWCLK) |         \
                                     PIN_PULL_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODT               (PIN_ODT_HIGH(GPIOA_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOA_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOA_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOA_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODT_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODT_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_MUXL              (PIN_MUX(GPIOA_PIN0, 0U) |              \
                                     PIN_MUX(GPIOA_PIN1, 0U) |              \
                                     PIN_MUX(GPIOA_PIN2, 0U) |              \
                                     PIN_MUX(GPIOA_PIN3, 0U) |              \
                                     PIN_MUX(GPIOA_PIN4, 0U) |              \
                                     PIN_MUX(GPIOA_PIN5, 0U) |              \
                                     PIN_MUX(GPIOA_PIN6, 0U) |              \
                                     PIN_MUX(GPIOA_PIN7, 0U))
#define VAL_GPIOA_MUXH              (PIN_MUX(GPIOA_PIN8, 0U) |              \
                                     PIN_MUX(GPIOA_PIN9, 0U) |              \
                                     PIN_MUX(GPIOA_PIN10, 0U) |             \
                                     PIN_MUX(GPIOA_PIN11, 0U) |             \
                                     PIN_MUX(GPIOA_PIN12, 0U) |             \
                                     PIN_MUX(GPIOA_SWDIO, 0U) |             \
                                     PIN_MUX(GPIOA_SWCLK, 0U) |             \
                                     PIN_MUX(GPIOA_PIN15, 0U))
#define VAL_GPIOA_HDRV              (PIN_HDRV_NORMAL(GPIOA_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOA_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOA_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOA_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOA_SWDIO) |         \
                                     PIN_HDRV_NORMAL(GPIOA_SWCLK) |         \
                                     PIN_HDRV_NORMAL(GPIOA_PIN15))

/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input pullup).
 * PB1  - PIN1                      (input pullup).
 * PB2  - PIN2                      (input pullup).
 * PB3  - PIN3                      (input pullup).
 * PB4  - PIN4                      (input pullup).
 * PB5  - PIN5                      (input pullup).
 * PB6  - PIN6                      (input pullup).
 * PB7  - PIN7                      (input pullup).
 * PB8  - PIN8                      (input pullup).
 * PB9  - PIN9                      (input pullup).
 * PB10 - PIN10                     (input pullup).
 * PB11 - PIN11                     (input pullup).
 * PB12 - PIN12                     (input pullup).
 * PB13 - PIN13                     (input pullup).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_CFGR              (PIN_MODE_INPUT(GPIOB_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OMODE             (PIN_OMODE_PUSHPULL(GPIOB_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_ODRVR             (PIN_ODRVR_STRONGER(GPIOB_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOB_PIN15))
#define VAL_GPIOB_PULL              (PIN_PULL_PULLUP(GPIOB_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOB_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOB_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOB_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOB_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOB_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODT               (PIN_ODT_HIGH(GPIOB_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOB_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOB_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOB_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOB_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_MUXL              (PIN_MUX(GPIOB_PIN0, 0U) |              \
                                     PIN_MUX(GPIOB_PIN1, 0U) |              \
                                     PIN_MUX(GPIOB_PIN2, 0U) |              \
                                     PIN_MUX(GPIOB_PIN3, 0U) |              \
                                     PIN_MUX(GPIOB_PIN4, 0U) |              \
                                     PIN_MUX(GPIOB_PIN5, 0U) |              \
                                     PIN_MUX(GPIOB_PIN6, 0U) |              \
                                     PIN_MUX(GPIOB_PIN7, 0U))
#define VAL_GPIOB_MUXH              (PIN_MUX(GPIOB_PIN8, 0U) |              \
                                     PIN_MUX(GPIOB_PIN9, 0U) |              \
                                     PIN_MUX(GPIOB_PIN10, 0U) |             \
                                     PIN_MUX(GPIOB_PIN11, 0U) |             \
                                     PIN_MUX(GPIOB_PIN12, 0U) |             \
                                     PIN_MUX(GPIOB_PIN13, 0U) |             \
                                     PIN_MUX(GPIOB_PIN14, 0U) |             \
                                     PIN_MUX(GPIOB_PIN15, 0U))
#define VAL_GPIOB_HDRV              (PIN_HDRV_NORMAL(GPIOB_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOB_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOB_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOB_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOB_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOB_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOB_PIN15))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input pullup).
 * PC1  - PIN1                      (input pullup).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PIN3                      (input pullup).
 * PC4  - PIN4                      (input pullup).
 * PC5  - PIN5                      (input pullup).
 * PC6  - PIN6                      (input pullup).
 * PC7  - PIN7                      (input pullup).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - PIN10                     (input pullup).
 * PC11 - PIN11                     (input pullup).
 * PC12 - PIN12                     (input pullup).
 * PC13 - PIN13                     (input pullup).
 * PC14 - PIN14                     (input pullup).
 * PC15 - PIN15                     (input pullup).
 */
#define VAL_GPIOC_CFGR              (PIN_MODE_INPUT(GPIOC_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OMODE             (PIN_OMODE_PUSHPULL(GPIOC_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_ODRVR             (PIN_ODRVR_STRONGER(GPIOC_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOC_PIN15))
#define VAL_GPIOC_PULL              (PIN_PULL_PULLUP(GPIOC_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOC_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOC_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOC_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOC_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOC_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOC_PIN15))
#define VAL_GPIOC_ODT               (PIN_ODT_HIGH(GPIOC_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOC_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOC_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_MUXL              (PIN_MUX(GPIOC_PIN0, 0U) |              \
                                     PIN_MUX(GPIOC_PIN1, 0U) |              \
                                     PIN_MUX(GPIOC_PIN2, 0U) |              \
                                     PIN_MUX(GPIOC_PIN3, 0U) |              \
                                     PIN_MUX(GPIOC_PIN4, 0U) |              \
                                     PIN_MUX(GPIOC_PIN5, 0U) |              \
                                     PIN_MUX(GPIOC_PIN6, 0U) |              \
                                     PIN_MUX(GPIOC_PIN7, 0U))
#define VAL_GPIOC_MUXH              (PIN_MUX(GPIOC_PIN8, 0U) |              \
                                     PIN_MUX(GPIOC_PIN9, 0U) |              \
                                     PIN_MUX(GPIOC_PIN10, 0U) |             \
                                     PIN_MUX(GPIOC_PIN11, 0U) |             \
                                     PIN_MUX(GPIOC_PIN12, 0U) |             \
                                     PIN_MUX(GPIOC_PIN13, 0U) |             \
                                     PIN_MUX(GPIOC_PIN14, 0U) |             \
                                     PIN_MUX(GPIOC_PIN15, 0U))
#define VAL_GPIOC_HDRV              (PIN_HDRV_NORMAL(GPIOC_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOC_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOC_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOC_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOC_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOC_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOC_PIN15))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_CFGR              (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OMODE             (PIN_OMODE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_ODRVR             (PIN_ODRVR_STRONGER(GPIOD_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOD_PIN15))
#define VAL_GPIOD_PULL              (PIN_PULL_PULLUP(GPIOD_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOD_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOD_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOD_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOD_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOD_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODT               (PIN_ODT_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_MUXL              (PIN_MUX(GPIOD_PIN0, 0U) |              \
                                     PIN_MUX(GPIOD_PIN1, 0U) |              \
                                     PIN_MUX(GPIOD_PIN2, 0U) |              \
                                     PIN_MUX(GPIOD_PIN3, 0U) |              \
                                     PIN_MUX(GPIOD_PIN4, 0U) |              \
                                     PIN_MUX(GPIOD_PIN5, 0U) |              \
                                     PIN_MUX(GPIOD_PIN6, 0U) |              \
                                     PIN_MUX(GPIOD_PIN7, 0U))
#define VAL_GPIOD_MUXH              (PIN_MUX(GPIOD_PIN8, 0U) |              \
                                     PIN_MUX(GPIOD_PIN9, 0U) |              \
                                     PIN_MUX(GPIOD_PIN10, 0U) |             \
                                     PIN_MUX(GPIOD_PIN11, 0U) |             \
                                     PIN_MUX(GPIOD_PIN12, 0U) |             \
                                     PIN_MUX(GPIOD_PIN13, 0U) |             \
                                     PIN_MUX(GPIOD_PIN14, 0U) |             \
                                     PIN_MUX(GPIOD_PIN15, 0U))
#define VAL_GPIOD_HDRV              (PIN_HDRV_NORMAL(GPIOD_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOD_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOD_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOD_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOD_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOD_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOD_PIN15))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_CFGR              (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OMODE             (PIN_OMODE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_ODRVR             (PIN_ODRVR_STRONGER(GPIOE_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOE_PIN15))
#define VAL_GPIOE_PULL              (PIN_PULL_PULLUP(GPIOE_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOE_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOE_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOE_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOE_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOE_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODT               (PIN_ODT_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_MUXL              (PIN_MUX(GPIOE_PIN0, 0U) |              \
                                     PIN_MUX(GPIOE_PIN1, 0U) |              \
                                     PIN_MUX(GPIOE_PIN2, 0U) |              \
                                     PIN_MUX(GPIOE_PIN3, 0U) |              \
                                     PIN_MUX(GPIOE_PIN4, 0U) |              \
                                     PIN_MUX(GPIOE_PIN5, 0U) |              \
                                     PIN_MUX(GPIOE_PIN6, 0U) |              \
                                     PIN_MUX(GPIOE_PIN7, 0U))
#define VAL_GPIOE_MUXH              (PIN_MUX(GPIOE_PIN8, 0U) |              \
                                     PIN_MUX(GPIOE_PIN9, 0U) |              \
                                     PIN_MUX(GPIOE_PIN10, 0U) |             \
                                     PIN_MUX(GPIOE_PIN11, 0U) |             \
                                     PIN_MUX(GPIOE_PIN12, 0U) |             \
                                     PIN_MUX(GPIOE_PIN13, 0U) |             \
                                     PIN_MUX(GPIOE_PIN14, 0U) |             \
                                     PIN_MUX(GPIOE_PIN15, 0U))
#define VAL_GPIOE_HDRV              (PIN_HDRV_NORMAL(GPIOE_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOE_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOE_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOE_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOE_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOE_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOE_PIN15))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pullup).
 * PF1  - PIN1                      (input pullup).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - PIN11                     (input pullup).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_CFGR              (PIN_MODE_INPUT(GPIOF_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OMODE             (PIN_OMODE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_ODRVR             (PIN_ODRVR_STRONGER(GPIOF_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOF_PIN15))
#define VAL_GPIOF_PULL              (PIN_PULL_PULLUP(GPIOF_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOF_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOF_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOF_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOF_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOF_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODT               (PIN_ODT_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_MUXL              (PIN_MUX(GPIOF_PIN0, 0U) |              \
                                     PIN_MUX(GPIOF_PIN1, 0U) |              \
                                     PIN_MUX(GPIOF_PIN2, 0U) |              \
                                     PIN_MUX(GPIOF_PIN3, 0U) |              \
                                     PIN_MUX(GPIOF_PIN4, 0U) |              \
                                     PIN_MUX(GPIOF_PIN5, 0U) |              \
                                     PIN_MUX(GPIOF_PIN6, 0U) |              \
                                     PIN_MUX(GPIOF_PIN7, 0U))
#define VAL_GPIOF_MUXH              (PIN_MUX(GPIOF_PIN8, 0U) |              \
                                     PIN_MUX(GPIOF_PIN9, 0U) |              \
                                     PIN_MUX(GPIOF_PIN10, 0U) |             \
                                     PIN_MUX(GPIOF_PIN11, 0U) |             \
                                     PIN_MUX(GPIOF_PIN12, 0U) |             \
                                     PIN_MUX(GPIOF_PIN13, 0U) |             \
                                     PIN_MUX(GPIOF_PIN14, 0U) |             \
                                     PIN_MUX(GPIOF_PIN15, 0U))
#define VAL_GPIOF_HDRV              (PIN_HDRV_NORMAL(GPIOF_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOF_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOF_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOF_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOF_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOF_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOF_PIN15))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pullup).
 * PG1  - PIN1                      (input pullup).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - PIN4                      (input pullup).
 * PG5  - PIN5                      (input pullup).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - PIN10                     (input pullup).
 * PG11 - PIN11                     (input pullup).
 * PG12 - PIN12                     (input pullup).
 * PG13 - PIN13                     (input pullup).
 * PG14 - PIN14                     (input pullup).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_CFGR              (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OMODE             (PIN_OMODE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OMODE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_ODRVR             (PIN_ODRVR_STRONGER(GPIOG_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN3) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN4) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN5) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN6) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN7) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN8) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN9) |       \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN10) |      \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN11) |      \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN12) |      \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN13) |      \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN14) |      \
                                     PIN_ODRVR_STRONGER(GPIOG_PIN15))
#define VAL_GPIOG_PULL              (PIN_PULL_PULLUP(GPIOG_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN3) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN4) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN5) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN6) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN7) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN8) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN9) |          \
                                     PIN_PULL_PULLUP(GPIOG_PIN10) |         \
                                     PIN_PULL_PULLUP(GPIOG_PIN11) |         \
                                     PIN_PULL_PULLUP(GPIOG_PIN12) |         \
                                     PIN_PULL_PULLUP(GPIOG_PIN13) |         \
                                     PIN_PULL_PULLUP(GPIOG_PIN14) |         \
                                     PIN_PULL_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODT               (PIN_ODT_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODT_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODT_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODT_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODT_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODT_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODT_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_MUXL              (PIN_MUX(GPIOG_PIN0, 0U) |              \
                                     PIN_MUX(GPIOG_PIN1, 0U) |              \
                                     PIN_MUX(GPIOG_PIN2, 0U) |              \
                                     PIN_MUX(GPIOG_PIN3, 0U) |              \
                                     PIN_MUX(GPIOG_PIN4, 0U) |              \
                                     PIN_MUX(GPIOG_PIN5, 0U) |              \
                                     PIN_MUX(GPIOG_PIN6, 0U) |              \
                                     PIN_MUX(GPIOG_PIN7, 0U))
#define VAL_GPIOG_MUXH              (PIN_MUX(GPIOG_PIN8, 0U) |              \
                                     PIN_MUX(GPIOG_PIN9, 0U) |              \
                                     PIN_MUX(GPIOG_PIN10, 0U) |             \
                                     PIN_MUX(GPIOG_PIN11, 0U) |             \
                                     PIN_MUX(GPIOG_PIN12, 0U) |             \
                                     PIN_MUX(GPIOG_PIN13, 0U) |             \
                                     PIN_MUX(GPIOG_PIN14, 0U) |             \
                                     PIN_MUX(GPIOG_PIN15, 0U))
#define VAL_GPIOG_HDRV              (PIN_HDRV_NORMAL(GPIOG_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN3) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN4) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN5) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN6) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN7) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN8) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN9) |          \
                                     PIN_HDRV_NORMAL(GPIOG_PIN10) |         \
                                     PIN_HDRV_NORMAL(GPIOG_PIN11) |         \
                                     PIN_HDRV_NORMAL(GPIOG_PIN12) |         \
                                     PIN_HDRV_NORMAL(GPIOG_PIN13) |         \
                                     PIN_HDRV_NORMAL(GPIOG_PIN14) |         \
                                     PIN_HDRV_NORMAL(GPIOG_PIN15))

/*
 * GPIOH setup:
 *
 * PH0  - PIN0                      (input pullup).
 * PH1  - PIN1                      (input pullup).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 */
#define VAL_GPIOH_CFGR              (PIN_MODE_INPUT(GPIOH_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3))
#define VAL_GPIOH_OMODE             (PIN_OMODE_PUSHPULL(GPIOH_PIN0) |       \
                                     PIN_OMODE_PUSHPULL(GPIOH_PIN1) |       \
                                     PIN_OMODE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OMODE_PUSHPULL(GPIOH_PIN3))
#define VAL_GPIOH_ODRVR             (PIN_ODRVR_STRONGER(GPIOH_PIN0) |       \
                                     PIN_ODRVR_STRONGER(GPIOH_PIN1) |       \
                                     PIN_ODRVR_STRONGER(GPIOH_PIN2) |       \
                                     PIN_ODRVR_STRONGER(GPIOH_PIN3))
#define VAL_GPIOH_PULL              (PIN_PULL_PULLUP(GPIOH_PIN0) |          \
                                     PIN_PULL_PULLUP(GPIOH_PIN1) |          \
                                     PIN_PULL_PULLUP(GPIOH_PIN2) |          \
                                     PIN_PULL_PULLUP(GPIOH_PIN3))
#define VAL_GPIOH_ODT               (PIN_ODT_HIGH(GPIOH_PIN0) |             \
                                     PIN_ODT_HIGH(GPIOH_PIN1) |             \
                                     PIN_ODT_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODT_HIGH(GPIOH_PIN3))
#define VAL_GPIOH_MUXL              (PIN_MUX(GPIOH_PIN0, 0U) |              \
                                     PIN_MUX(GPIOH_PIN1, 0U) |              \
                                     PIN_MUX(GPIOH_PIN2, 0U) |              \
                                     PIN_MUX(GPIOH_PIN3, 0U))
#define VAL_GPIOH_MUXH              0
#define VAL_GPIOH_HDRV              (PIN_HDRV_NORMAL(GPIOH_PIN0) |          \
                                     PIN_HDRV_NORMAL(GPIOH_PIN1) |          \
                                     PIN_HDRV_NORMAL(GPIOH_PIN2) |          \
                                     PIN_HDRV_NORMAL(GPIOH_PIN3)) 
                                     
/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */