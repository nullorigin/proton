/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRResources_IVRResources_001_LoadSharedResource( void *args )
{
    struct IVRResources_IVRResources_001_LoadSharedResource_params *params = (struct IVRResources_IVRResources_001_LoadSharedResource_params *)args;
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->u_iface;
    params->_ret = iface->LoadSharedResource( params->pchResourceName, params->pchBuffer, params->unBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRResources_IVRResources_001_LoadSharedResource( void *args )
{
    struct wow64_IVRResources_IVRResources_001_LoadSharedResource_params *params = (struct wow64_IVRResources_IVRResources_001_LoadSharedResource_params *)args;
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->u_iface;
    params->_ret = iface->LoadSharedResource( params->pchResourceName, params->pchBuffer, params->unBufferLen );
    return 0;
}
#endif

NTSTATUS IVRResources_IVRResources_001_GetResourceFullPath( void *args )
{
    struct IVRResources_IVRResources_001_GetResourceFullPath_params *params = (struct IVRResources_IVRResources_001_GetResourceFullPath_params *)args;
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->u_iface;
    params->_ret = iface->GetResourceFullPath( params->pchResourceName, params->pchResourceTypeDirectory, params->pchPathBuffer, params->unBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRResources_IVRResources_001_GetResourceFullPath( void *args )
{
    struct wow64_IVRResources_IVRResources_001_GetResourceFullPath_params *params = (struct wow64_IVRResources_IVRResources_001_GetResourceFullPath_params *)args;
    struct u_IVRResources_IVRResources_001 *iface = (struct u_IVRResources_IVRResources_001 *)params->u_iface;
    params->_ret = iface->GetResourceFullPath( params->pchResourceName, params->pchResourceTypeDirectory, params->pchPathBuffer, params->unBufferLen );
    return 0;
}
#endif

