/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_WindowsRegistryFilter,
    0x2ac54ff7,0x19c8,0x4cef,0xad,0x86,0xad,0xef,0x1e,0xca,0xcb,0xa5);
// {2ac54ff7-19c8-4cef-ad86-adef1ecacba5}
