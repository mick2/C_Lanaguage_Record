#ifndef __SINGLEGENTYPE_H__
#define __SINGLEGENTYPE_H__

/***** generic return codes **********************************/
#define GT_ERROR                 (-1)
#define GT_OK                    (0x00) /* Operation succeeded */
#define GT_FAIL                  (0x01) /* Operation failed    */

#define GT_BAD_VALUE             (0x02) /* Illegal value        */
#define GT_OUT_OF_RANGE          (0x03) /* Value is out of range*/
#define GT_BAD_PARAM             (0x04) /* Illegal parameter in function called  */
#define GT_BAD_PTR               (0x05) /* Illegal pointer value                 */
#define GT_BAD_SIZE              (0x06) /* Illegal size                          */
#define GT_BAD_STATE             (0x07) /* Illegal state of state machine        */
#define GT_SET_ERROR             (0x08) /* Set operation failed                  */
#define GT_GET_ERROR             (0x09) /* Get operation failed                  */
#define GT_CREATE_ERROR          (0x0A) /* Fail while creating an item           */
#define GT_NOT_FOUND             (0x0B) /* Item not found                        */
#define GT_NO_MORE               (0x0C) /* No more items found                   */
#define GT_NO_SUCH               (0x0D) /* No such item                          */
#define GT_TIMEOUT               (0x0E) /* Time Out                              */
#define GT_NO_CHANGE             (0x0F) /* The parameter is already in this value*/
#define GT_NOT_SUPPORTED         (0x10) /* This request is not support           */
#define GT_NOT_IMPLEMENTED       (0x11) /* This request is not implemented       */
#define GT_NOT_INITIALIZED       (0x12) /* The item is not initialized           */
#define GT_NO_RESOURCE           (0x13) /* Resource not available (memory ...)   */
#define GT_FULL                  (0x14) /* Item is full (Queue or table etc...)  */
#define GT_EMPTY                 (0x15) /* Item is empty (Queue or table etc...) */
#define GT_INIT_ERROR            (0x16) /* Error occurred while INIT process     */
#define GT_NOT_READY             (0x1A) /* The other side is not ready yet       */
#define GT_ALREADY_EXIST         (0x1B) /* Tried to create existing item         */
#define GT_OUT_OF_CPU_MEM        (0x1C) /* Cpu memory allocation failed.         */
#define GT_ABORTED               (0x1D) /* Operation has been aborted.           */
#define GT_NOT_APPLICABLE_DEVICE (0x1E) /* API not applicable to device , can
                                           be returned only on devNum parameter  */
#define GT_UNFIXABLE_ECC_ERROR   (0x1F) /* the CPSS detected ECC error that can't
                                           be fixed when reading from the memory which is protected by ECC.
                                           NOTE: relevant only when the table resides in the CSU ,
                                           the ECC is used , and the CPSS emulates the ECC detection
                                           and correction for 'Read entry' operations */
#define GT_UNFIXABLE_BIST_ERROR  (0x20) /* Built-in self-test detected unfixable error */
#define GT_CHECKSUM_ERROR        (0x21) /* checksum doesn't fits received data */
#define GT_DSA_PARSING_ERROR     (0x22) /* DSA tag parsing error */


#endif

