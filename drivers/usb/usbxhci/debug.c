/*
 * PROJECT:         ReactOS system libraries
 * LICENSE:         GPLv2+ - See COPYING in the top level directory
 * PURPOSE:         debug functions
 * PROGRAMMER:      Rama Teja Gampa <ramateja.g@gmail.com>
*/
#include "usbxhci.h"

#define NDEBUG
#include <debug.h>

VOID
NTAPI
XHCI_DumpHwTD(IN PXHCI_HCD_TD TD)
{
    if (!TD)
    {
        return;
    }

    DPRINT(": TD                       - %p\n", TD);
    DPRINT(": TD->PhysicalAddress      - %p\n", TD->PhysicalAddress);
    DPRINT(": TD->HwTD.NextTD          - %p\n", TD->HwTD.NextTD);
    DPRINT(": TD->HwTD.AlternateNextTD - %p\n", TD->HwTD.AlternateNextTD);
    DPRINT(": TD->HwTD.Token.AsULONG   - %p\n", TD->HwTD.Token.AsULONG);
}

VOID
NTAPI
XHCI_DumpHwQH(IN PXHCI_HCD_QH QH)
{
    if (!QH)
    {
        return;
    }

    DPRINT(": QH->sqh.HwQH.CurrentTD       - %p\n", QH->sqh.HwQH.CurrentTD);
    DPRINT(": QH->sqh.HwQH.NextTD          - %p\n", QH->sqh.HwQH.NextTD);
    DPRINT(": QH->sqh.HwQH.AlternateNextTD - %p\n", QH->sqh.HwQH.AlternateNextTD);
    DPRINT(": QH->sqh.HwQH.Token.AsULONG   - %p\n", QH->sqh.HwQH.Token.AsULONG);
}