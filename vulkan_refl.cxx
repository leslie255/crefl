// Generated with https://github.com/leslie255/crefl.git
#include "vulkan_refl.hxx"

namespace vulkan_refl {

string_view_t enum_name(string_view_t typename_, int64_t value) {
    if (typename_ == sv("VkViewportCoordinateSwizzleNV")) return enum_name_VkViewportCoordinateSwizzleNV(value);
    else if (typename_ == sv("VkVideoSessionParametersCreateFlagBitsKHR")) return enum_name_VkVideoSessionParametersCreateFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoSessionCreateFlagBitsKHR")) return enum_name_VkVideoSessionCreateFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeUsageFlagBitsKHR")) return enum_name_VkVideoEncodeUsageFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeTuningModeKHR")) return enum_name_VkVideoEncodeTuningModeKHR(value);
    else if (typename_ == sv("VkVideoEncodeRgbRangeCompressionFlagBitsVALVE")) return enum_name_VkVideoEncodeRgbRangeCompressionFlagBitsVALVE(value);
    else if (typename_ == sv("VkVideoEncodeRgbModelConversionFlagBitsVALVE")) return enum_name_VkVideoEncodeRgbModelConversionFlagBitsVALVE(value);
    else if (typename_ == sv("VkVideoEncodeRgbChromaOffsetFlagBitsVALVE")) return enum_name_VkVideoEncodeRgbChromaOffsetFlagBitsVALVE(value);
    else if (typename_ == sv("VkVideoEncodeRateControlModeFlagBitsKHR")) return enum_name_VkVideoEncodeRateControlModeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeIntraRefreshModeFlagBitsKHR")) return enum_name_VkVideoEncodeIntraRefreshModeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH265TransformBlockSizeFlagBitsKHR")) return enum_name_VkVideoEncodeH265TransformBlockSizeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH265StdFlagBitsKHR")) return enum_name_VkVideoEncodeH265StdFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH265RateControlFlagBitsKHR")) return enum_name_VkVideoEncodeH265RateControlFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH265CtbSizeFlagBitsKHR")) return enum_name_VkVideoEncodeH265CtbSizeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH265CapabilityFlagBitsKHR")) return enum_name_VkVideoEncodeH265CapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH264StdFlagBitsKHR")) return enum_name_VkVideoEncodeH264StdFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH264RateControlFlagBitsKHR")) return enum_name_VkVideoEncodeH264RateControlFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeH264CapabilityFlagBitsKHR")) return enum_name_VkVideoEncodeH264CapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeFlagBitsKHR")) return enum_name_VkVideoEncodeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeFeedbackFlagBitsKHR")) return enum_name_VkVideoEncodeFeedbackFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeContentFlagBitsKHR")) return enum_name_VkVideoEncodeContentFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeCapabilityFlagBitsKHR")) return enum_name_VkVideoEncodeCapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1SuperblockSizeFlagBitsKHR")) return enum_name_VkVideoEncodeAV1SuperblockSizeFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1StdFlagBitsKHR")) return enum_name_VkVideoEncodeAV1StdFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1RateControlGroupKHR")) return enum_name_VkVideoEncodeAV1RateControlGroupKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1RateControlFlagBitsKHR")) return enum_name_VkVideoEncodeAV1RateControlFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1PredictionModeKHR")) return enum_name_VkVideoEncodeAV1PredictionModeKHR(value);
    else if (typename_ == sv("VkVideoEncodeAV1CapabilityFlagBitsKHR")) return enum_name_VkVideoEncodeAV1CapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoDecodeUsageFlagBitsKHR")) return enum_name_VkVideoDecodeUsageFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoDecodeH264PictureLayoutFlagBitsKHR")) return enum_name_VkVideoDecodeH264PictureLayoutFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoDecodeCapabilityFlagBitsKHR")) return enum_name_VkVideoDecodeCapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoComponentBitDepthFlagBitsKHR")) return enum_name_VkVideoComponentBitDepthFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoCodingControlFlagBitsKHR")) return enum_name_VkVideoCodingControlFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoCodecOperationFlagBitsKHR")) return enum_name_VkVideoCodecOperationFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoChromaSubsamplingFlagBitsKHR")) return enum_name_VkVideoChromaSubsamplingFlagBitsKHR(value);
    else if (typename_ == sv("VkVideoCapabilityFlagBitsKHR")) return enum_name_VkVideoCapabilityFlagBitsKHR(value);
    else if (typename_ == sv("VkVertexInputRate")) return enum_name_VkVertexInputRate(value);
    else if (typename_ == sv("VkVendorId")) return enum_name_VkVendorId(value);
    else if (typename_ == sv("VkValidationFeatureEnableEXT")) return enum_name_VkValidationFeatureEnableEXT(value);
    else if (typename_ == sv("VkValidationFeatureDisableEXT")) return enum_name_VkValidationFeatureDisableEXT(value);
    else if (typename_ == sv("VkValidationCheckEXT")) return enum_name_VkValidationCheckEXT(value);
    else if (typename_ == sv("VkValidationCacheHeaderVersionEXT")) return enum_name_VkValidationCacheHeaderVersionEXT(value);
    else if (typename_ == sv("VkToolPurposeFlagBits")) return enum_name_VkToolPurposeFlagBits(value);
    else if (typename_ == sv("VkTimeDomainKHR")) return enum_name_VkTimeDomainKHR(value);
    else if (typename_ == sv("VkTileShadingRenderPassFlagBitsQCOM")) return enum_name_VkTileShadingRenderPassFlagBitsQCOM(value);
    else if (typename_ == sv("VkTessellationDomainOrigin")) return enum_name_VkTessellationDomainOrigin(value);
    else if (typename_ == sv("VkTensorTilingARM")) return enum_name_VkTensorTilingARM(value);
    else if (typename_ == sv("VkSystemAllocationScope")) return enum_name_VkSystemAllocationScope(value);
    else if (typename_ == sv("VkSwapchainCreateFlagBitsKHR")) return enum_name_VkSwapchainCreateFlagBitsKHR(value);
    else if (typename_ == sv("VkSurfaceTransformFlagBitsKHR")) return enum_name_VkSurfaceTransformFlagBitsKHR(value);
    else if (typename_ == sv("VkSurfaceCounterFlagBitsEXT")) return enum_name_VkSurfaceCounterFlagBitsEXT(value);
    else if (typename_ == sv("VkSubpassMergeStatusEXT")) return enum_name_VkSubpassMergeStatusEXT(value);
    else if (typename_ == sv("VkSubpassDescriptionFlagBits")) return enum_name_VkSubpassDescriptionFlagBits(value);
    else if (typename_ == sv("VkSubpassContents")) return enum_name_VkSubpassContents(value);
    else if (typename_ == sv("VkSubmitFlagBits")) return enum_name_VkSubmitFlagBits(value);
    else if (typename_ == sv("VkSubgroupFeatureFlagBits")) return enum_name_VkSubgroupFeatureFlagBits(value);
    else if (typename_ == sv("VkStructureType")) return enum_name_VkStructureType(value);
    else if (typename_ == sv("VkStencilOp")) return enum_name_VkStencilOp(value);
    else if (typename_ == sv("VkStencilFaceFlagBits")) return enum_name_VkStencilFaceFlagBits(value);
    else if (typename_ == sv("VkSpirvResourceTypeFlagBitsEXT")) return enum_name_VkSpirvResourceTypeFlagBitsEXT(value);
    else if (typename_ == sv("VkSparseMemoryBindFlagBits")) return enum_name_VkSparseMemoryBindFlagBits(value);
    else if (typename_ == sv("VkSparseImageFormatFlagBits")) return enum_name_VkSparseImageFormatFlagBits(value);
    else if (typename_ == sv("VkSharingMode")) return enum_name_VkSharingMode(value);
    else if (typename_ == sv("VkShadingRatePaletteEntryNV")) return enum_name_VkShadingRatePaletteEntryNV(value);
    else if (typename_ == sv("VkShaderStageFlagBits")) return enum_name_VkShaderStageFlagBits(value);
    else if (typename_ == sv("VkShaderInfoTypeAMD")) return enum_name_VkShaderInfoTypeAMD(value);
    else if (typename_ == sv("VkShaderGroupShaderKHR")) return enum_name_VkShaderGroupShaderKHR(value);
    else if (typename_ == sv("VkShaderFloatControlsIndependence")) return enum_name_VkShaderFloatControlsIndependence(value);
    else if (typename_ == sv("VkShaderCreateFlagBitsEXT")) return enum_name_VkShaderCreateFlagBitsEXT(value);
    else if (typename_ == sv("VkShaderCorePropertiesFlagBitsAMD")) return enum_name_VkShaderCorePropertiesFlagBitsAMD(value);
    else if (typename_ == sv("VkShaderCodeTypeEXT")) return enum_name_VkShaderCodeTypeEXT(value);
    else if (typename_ == sv("VkSemaphoreWaitFlagBits")) return enum_name_VkSemaphoreWaitFlagBits(value);
    else if (typename_ == sv("VkSemaphoreType")) return enum_name_VkSemaphoreType(value);
    else if (typename_ == sv("VkSemaphoreImportFlagBits")) return enum_name_VkSemaphoreImportFlagBits(value);
    else if (typename_ == sv("VkScopeKHR")) return enum_name_VkScopeKHR(value);
    else if (typename_ == sv("VkSamplerYcbcrRange")) return enum_name_VkSamplerYcbcrRange(value);
    else if (typename_ == sv("VkSamplerYcbcrModelConversion")) return enum_name_VkSamplerYcbcrModelConversion(value);
    else if (typename_ == sv("VkSamplerReductionMode")) return enum_name_VkSamplerReductionMode(value);
    else if (typename_ == sv("VkSamplerMipmapMode")) return enum_name_VkSamplerMipmapMode(value);
    else if (typename_ == sv("VkSamplerCreateFlagBits")) return enum_name_VkSamplerCreateFlagBits(value);
    else if (typename_ == sv("VkSamplerAddressMode")) return enum_name_VkSamplerAddressMode(value);
    else if (typename_ == sv("VkSampleCountFlagBits")) return enum_name_VkSampleCountFlagBits(value);
    else if (typename_ == sv("VkResult")) return enum_name_VkResult(value);
    else if (typename_ == sv("VkResolveModeFlagBits")) return enum_name_VkResolveModeFlagBits(value);
    else if (typename_ == sv("VkResolveImageFlagBitsKHR")) return enum_name_VkResolveImageFlagBitsKHR(value);
    else if (typename_ == sv("VkRenderingFlagBits")) return enum_name_VkRenderingFlagBits(value);
    else if (typename_ == sv("VkRenderingAttachmentFlagBitsKHR")) return enum_name_VkRenderingAttachmentFlagBitsKHR(value);
    else if (typename_ == sv("VkRenderPassCreateFlagBits")) return enum_name_VkRenderPassCreateFlagBits(value);
    else if (typename_ == sv("VkRayTracingShaderGroupTypeKHR")) return enum_name_VkRayTracingShaderGroupTypeKHR(value);
    else if (typename_ == sv("VkRayTracingLssPrimitiveEndCapsModeNV")) return enum_name_VkRayTracingLssPrimitiveEndCapsModeNV(value);
    else if (typename_ == sv("VkRayTracingLssIndexingModeNV")) return enum_name_VkRayTracingLssIndexingModeNV(value);
    else if (typename_ == sv("VkRayTracingInvocationReorderModeEXT")) return enum_name_VkRayTracingInvocationReorderModeEXT(value);
    else if (typename_ == sv("VkRasterizationOrderAMD")) return enum_name_VkRasterizationOrderAMD(value);
    else if (typename_ == sv("VkQueueGlobalPriority")) return enum_name_VkQueueGlobalPriority(value);
    else if (typename_ == sv("VkQueueFlagBits")) return enum_name_VkQueueFlagBits(value);
    else if (typename_ == sv("VkQueryType")) return enum_name_VkQueryType(value);
    else if (typename_ == sv("VkQueryResultStatusKHR")) return enum_name_VkQueryResultStatusKHR(value);
    else if (typename_ == sv("VkQueryResultFlagBits")) return enum_name_VkQueryResultFlagBits(value);
    else if (typename_ == sv("VkQueryPoolSamplingModeINTEL")) return enum_name_VkQueryPoolSamplingModeINTEL(value);
    else if (typename_ == sv("VkQueryPoolCreateFlagBits")) return enum_name_VkQueryPoolCreateFlagBits(value);
    else if (typename_ == sv("VkQueryPipelineStatisticFlagBits")) return enum_name_VkQueryPipelineStatisticFlagBits(value);
    else if (typename_ == sv("VkQueryControlFlagBits")) return enum_name_VkQueryControlFlagBits(value);
    else if (typename_ == sv("VkProvokingVertexModeEXT")) return enum_name_VkProvokingVertexModeEXT(value);
    else if (typename_ == sv("VkPrimitiveTopology")) return enum_name_VkPrimitiveTopology(value);
    else if (typename_ == sv("VkPresentTimingInfoFlagBitsEXT")) return enum_name_VkPresentTimingInfoFlagBitsEXT(value);
    else if (typename_ == sv("VkPresentStageFlagBitsEXT")) return enum_name_VkPresentStageFlagBitsEXT(value);
    else if (typename_ == sv("VkPresentScalingFlagBitsKHR")) return enum_name_VkPresentScalingFlagBitsKHR(value);
    else if (typename_ == sv("VkPresentModeKHR")) return enum_name_VkPresentModeKHR(value);
    else if (typename_ == sv("VkPresentGravityFlagBitsKHR")) return enum_name_VkPresentGravityFlagBitsKHR(value);
    else if (typename_ == sv("VkPolygonMode")) return enum_name_VkPolygonMode(value);
    else if (typename_ == sv("VkPointClippingBehavior")) return enum_name_VkPointClippingBehavior(value);
    else if (typename_ == sv("VkPipelineStageFlagBits")) return enum_name_VkPipelineStageFlagBits(value);
    else if (typename_ == sv("VkPipelineShaderStageCreateFlagBits")) return enum_name_VkPipelineShaderStageCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineRobustnessImageBehavior")) return enum_name_VkPipelineRobustnessImageBehavior(value);
    else if (typename_ == sv("VkPipelineRobustnessBufferBehavior")) return enum_name_VkPipelineRobustnessBufferBehavior(value);
    else if (typename_ == sv("VkPipelineLayoutCreateFlagBits")) return enum_name_VkPipelineLayoutCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineExecutableStatisticFormatKHR")) return enum_name_VkPipelineExecutableStatisticFormatKHR(value);
    else if (typename_ == sv("VkPipelineDepthStencilStateCreateFlagBits")) return enum_name_VkPipelineDepthStencilStateCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineCreationFeedbackFlagBits")) return enum_name_VkPipelineCreationFeedbackFlagBits(value);
    else if (typename_ == sv("VkPipelineCreateFlagBits")) return enum_name_VkPipelineCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineCompilerControlFlagBitsAMD")) return enum_name_VkPipelineCompilerControlFlagBitsAMD(value);
    else if (typename_ == sv("VkPipelineColorBlendStateCreateFlagBits")) return enum_name_VkPipelineColorBlendStateCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineCacheHeaderVersion")) return enum_name_VkPipelineCacheHeaderVersion(value);
    else if (typename_ == sv("VkPipelineCacheCreateFlagBits")) return enum_name_VkPipelineCacheCreateFlagBits(value);
    else if (typename_ == sv("VkPipelineBindPoint")) return enum_name_VkPipelineBindPoint(value);
    else if (typename_ == sv("VkPhysicalDeviceType")) return enum_name_VkPhysicalDeviceType(value);
    else if (typename_ == sv("VkPhysicalDeviceLayeredApiKHR")) return enum_name_VkPhysicalDeviceLayeredApiKHR(value);
    else if (typename_ == sv("VkPhysicalDeviceDataGraphProcessingEngineTypeARM")) return enum_name_VkPhysicalDeviceDataGraphProcessingEngineTypeARM(value);
    else if (typename_ == sv("VkPhysicalDeviceDataGraphOperationTypeARM")) return enum_name_VkPhysicalDeviceDataGraphOperationTypeARM(value);
    else if (typename_ == sv("VkPerformanceValueTypeINTEL")) return enum_name_VkPerformanceValueTypeINTEL(value);
    else if (typename_ == sv("VkPerformanceParameterTypeINTEL")) return enum_name_VkPerformanceParameterTypeINTEL(value);
    else if (typename_ == sv("VkPerformanceOverrideTypeINTEL")) return enum_name_VkPerformanceOverrideTypeINTEL(value);
    else if (typename_ == sv("VkPerformanceCounterUnitKHR")) return enum_name_VkPerformanceCounterUnitKHR(value);
    else if (typename_ == sv("VkPerformanceCounterStorageKHR")) return enum_name_VkPerformanceCounterStorageKHR(value);
    else if (typename_ == sv("VkPerformanceCounterScopeKHR")) return enum_name_VkPerformanceCounterScopeKHR(value);
    else if (typename_ == sv("VkPerformanceCounterDescriptionFlagBitsKHR")) return enum_name_VkPerformanceCounterDescriptionFlagBitsKHR(value);
    else if (typename_ == sv("VkPerformanceConfigurationTypeINTEL")) return enum_name_VkPerformanceConfigurationTypeINTEL(value);
    else if (typename_ == sv("VkPeerMemoryFeatureFlagBits")) return enum_name_VkPeerMemoryFeatureFlagBits(value);
    else if (typename_ == sv("VkPastPresentationTimingFlagBitsEXT")) return enum_name_VkPastPresentationTimingFlagBitsEXT(value);
    else if (typename_ == sv("VkPartitionedAccelerationStructureOpTypeNV")) return enum_name_VkPartitionedAccelerationStructureOpTypeNV(value);
    else if (typename_ == sv("VkPartitionedAccelerationStructureInstanceFlagBitsNV")) return enum_name_VkPartitionedAccelerationStructureInstanceFlagBitsNV(value);
    else if (typename_ == sv("VkOutOfBandQueueTypeNV")) return enum_name_VkOutOfBandQueueTypeNV(value);
    else if (typename_ == sv("VkOpticalFlowUsageFlagBitsNV")) return enum_name_VkOpticalFlowUsageFlagBitsNV(value);
    else if (typename_ == sv("VkOpticalFlowSessionCreateFlagBitsNV")) return enum_name_VkOpticalFlowSessionCreateFlagBitsNV(value);
    else if (typename_ == sv("VkOpticalFlowSessionBindingPointNV")) return enum_name_VkOpticalFlowSessionBindingPointNV(value);
    else if (typename_ == sv("VkOpticalFlowPerformanceLevelNV")) return enum_name_VkOpticalFlowPerformanceLevelNV(value);
    else if (typename_ == sv("VkOpticalFlowGridSizeFlagBitsNV")) return enum_name_VkOpticalFlowGridSizeFlagBitsNV(value);
    else if (typename_ == sv("VkOpticalFlowExecuteFlagBitsNV")) return enum_name_VkOpticalFlowExecuteFlagBitsNV(value);
    else if (typename_ == sv("VkOpacityMicromapSpecialIndexEXT")) return enum_name_VkOpacityMicromapSpecialIndexEXT(value);
    else if (typename_ == sv("VkOpacityMicromapFormatEXT")) return enum_name_VkOpacityMicromapFormatEXT(value);
    else if (typename_ == sv("VkObjectType")) return enum_name_VkObjectType(value);
    else if (typename_ == sv("VkMicromapTypeEXT")) return enum_name_VkMicromapTypeEXT(value);
    else if (typename_ == sv("VkMicromapCreateFlagBitsEXT")) return enum_name_VkMicromapCreateFlagBitsEXT(value);
    else if (typename_ == sv("VkMemoryUnmapFlagBits")) return enum_name_VkMemoryUnmapFlagBits(value);
    else if (typename_ == sv("VkMemoryPropertyFlagBits")) return enum_name_VkMemoryPropertyFlagBits(value);
    else if (typename_ == sv("VkMemoryOverallocationBehaviorAMD")) return enum_name_VkMemoryOverallocationBehaviorAMD(value);
    else if (typename_ == sv("VkMemoryMapFlagBits")) return enum_name_VkMemoryMapFlagBits(value);
    else if (typename_ == sv("VkMemoryHeapFlagBits")) return enum_name_VkMemoryHeapFlagBits(value);
    else if (typename_ == sv("VkMemoryAllocateFlagBits")) return enum_name_VkMemoryAllocateFlagBits(value);
    else if (typename_ == sv("VkLogicOp")) return enum_name_VkLogicOp(value);
    else if (typename_ == sv("VkLineRasterizationMode")) return enum_name_VkLineRasterizationMode(value);
    else if (typename_ == sv("VkLayeredDriverUnderlyingApiMSFT")) return enum_name_VkLayeredDriverUnderlyingApiMSFT(value);
    else if (typename_ == sv("VkLayerSettingTypeEXT")) return enum_name_VkLayerSettingTypeEXT(value);
    else if (typename_ == sv("VkLatencyMarkerNV")) return enum_name_VkLatencyMarkerNV(value);
    else if (typename_ == sv("VkInternalAllocationType")) return enum_name_VkInternalAllocationType(value);
    else if (typename_ == sv("VkInstanceCreateFlagBits")) return enum_name_VkInstanceCreateFlagBits(value);
    else if (typename_ == sv("VkIndirectStateFlagBitsNV")) return enum_name_VkIndirectStateFlagBitsNV(value);
    else if (typename_ == sv("VkIndirectExecutionSetInfoTypeEXT")) return enum_name_VkIndirectExecutionSetInfoTypeEXT(value);
    else if (typename_ == sv("VkIndirectCommandsTokenTypeNV")) return enum_name_VkIndirectCommandsTokenTypeNV(value);
    else if (typename_ == sv("VkIndirectCommandsTokenTypeEXT")) return enum_name_VkIndirectCommandsTokenTypeEXT(value);
    else if (typename_ == sv("VkIndirectCommandsLayoutUsageFlagBitsNV")) return enum_name_VkIndirectCommandsLayoutUsageFlagBitsNV(value);
    else if (typename_ == sv("VkIndirectCommandsLayoutUsageFlagBitsEXT")) return enum_name_VkIndirectCommandsLayoutUsageFlagBitsEXT(value);
    else if (typename_ == sv("VkIndirectCommandsInputModeFlagBitsEXT")) return enum_name_VkIndirectCommandsInputModeFlagBitsEXT(value);
    else if (typename_ == sv("VkIndexType")) return enum_name_VkIndexType(value);
    else if (typename_ == sv("VkImageViewType")) return enum_name_VkImageViewType(value);
    else if (typename_ == sv("VkImageViewCreateFlagBits")) return enum_name_VkImageViewCreateFlagBits(value);
    else if (typename_ == sv("VkImageUsageFlagBits")) return enum_name_VkImageUsageFlagBits(value);
    else if (typename_ == sv("VkImageType")) return enum_name_VkImageType(value);
    else if (typename_ == sv("VkImageTiling")) return enum_name_VkImageTiling(value);
    else if (typename_ == sv("VkImageLayout")) return enum_name_VkImageLayout(value);
    else if (typename_ == sv("VkImageCreateFlagBits")) return enum_name_VkImageCreateFlagBits(value);
    else if (typename_ == sv("VkImageCompressionFlagBitsEXT")) return enum_name_VkImageCompressionFlagBitsEXT(value);
    else if (typename_ == sv("VkImageCompressionFixedRateFlagBitsEXT")) return enum_name_VkImageCompressionFixedRateFlagBitsEXT(value);
    else if (typename_ == sv("VkImageAspectFlagBits")) return enum_name_VkImageAspectFlagBits(value);
    else if (typename_ == sv("VkHostImageCopyFlagBits")) return enum_name_VkHostImageCopyFlagBits(value);
    else if (typename_ == sv("VkGraphicsPipelineLibraryFlagBitsEXT")) return enum_name_VkGraphicsPipelineLibraryFlagBitsEXT(value);
    else if (typename_ == sv("VkGeometryTypeKHR")) return enum_name_VkGeometryTypeKHR(value);
    else if (typename_ == sv("VkGeometryInstanceFlagBitsKHR")) return enum_name_VkGeometryInstanceFlagBitsKHR(value);
    else if (typename_ == sv("VkGeometryFlagBitsKHR")) return enum_name_VkGeometryFlagBitsKHR(value);
    else if (typename_ == sv("VkFrontFace")) return enum_name_VkFrontFace(value);
    else if (typename_ == sv("VkFramebufferCreateFlagBits")) return enum_name_VkFramebufferCreateFlagBits(value);
    else if (typename_ == sv("VkFrameBoundaryFlagBitsEXT")) return enum_name_VkFrameBoundaryFlagBitsEXT(value);
    else if (typename_ == sv("VkFragmentShadingRateTypeNV")) return enum_name_VkFragmentShadingRateTypeNV(value);
    else if (typename_ == sv("VkFragmentShadingRateNV")) return enum_name_VkFragmentShadingRateNV(value);
    else if (typename_ == sv("VkFragmentShadingRateCombinerOpKHR")) return enum_name_VkFragmentShadingRateCombinerOpKHR(value);
    else if (typename_ == sv("VkFormatFeatureFlagBits")) return enum_name_VkFormatFeatureFlagBits(value);
    else if (typename_ == sv("VkFormat")) return enum_name_VkFormat(value);
    else if (typename_ == sv("VkFilter")) return enum_name_VkFilter(value);
    else if (typename_ == sv("VkFenceImportFlagBits")) return enum_name_VkFenceImportFlagBits(value);
    else if (typename_ == sv("VkFenceCreateFlagBits")) return enum_name_VkFenceCreateFlagBits(value);
    else if (typename_ == sv("VkExternalSemaphoreHandleTypeFlagBits")) return enum_name_VkExternalSemaphoreHandleTypeFlagBits(value);
    else if (typename_ == sv("VkExternalSemaphoreFeatureFlagBits")) return enum_name_VkExternalSemaphoreFeatureFlagBits(value);
    else if (typename_ == sv("VkExternalMemoryHandleTypeFlagBitsNV")) return enum_name_VkExternalMemoryHandleTypeFlagBitsNV(value);
    else if (typename_ == sv("VkExternalMemoryHandleTypeFlagBits")) return enum_name_VkExternalMemoryHandleTypeFlagBits(value);
    else if (typename_ == sv("VkExternalMemoryFeatureFlagBitsNV")) return enum_name_VkExternalMemoryFeatureFlagBitsNV(value);
    else if (typename_ == sv("VkExternalMemoryFeatureFlagBits")) return enum_name_VkExternalMemoryFeatureFlagBits(value);
    else if (typename_ == sv("VkExternalFenceHandleTypeFlagBits")) return enum_name_VkExternalFenceHandleTypeFlagBits(value);
    else if (typename_ == sv("VkExternalFenceFeatureFlagBits")) return enum_name_VkExternalFenceFeatureFlagBits(value);
    else if (typename_ == sv("VkEventCreateFlagBits")) return enum_name_VkEventCreateFlagBits(value);
    else if (typename_ == sv("VkDynamicState")) return enum_name_VkDynamicState(value);
    else if (typename_ == sv("VkDriverId")) return enum_name_VkDriverId(value);
    else if (typename_ == sv("VkDisplaySurfaceStereoTypeNV")) return enum_name_VkDisplaySurfaceStereoTypeNV(value);
    else if (typename_ == sv("VkDisplayPowerStateEXT")) return enum_name_VkDisplayPowerStateEXT(value);
    else if (typename_ == sv("VkDisplayPlaneAlphaFlagBitsKHR")) return enum_name_VkDisplayPlaneAlphaFlagBitsKHR(value);
    else if (typename_ == sv("VkDisplayEventTypeEXT")) return enum_name_VkDisplayEventTypeEXT(value);
    else if (typename_ == sv("VkDiscardRectangleModeEXT")) return enum_name_VkDiscardRectangleModeEXT(value);
    else if (typename_ == sv("VkDirectDriverLoadingModeLUNARG")) return enum_name_VkDirectDriverLoadingModeLUNARG(value);
    else if (typename_ == sv("VkDeviceQueueCreateFlagBits")) return enum_name_VkDeviceQueueCreateFlagBits(value);
    else if (typename_ == sv("VkDeviceMemoryReportEventTypeEXT")) return enum_name_VkDeviceMemoryReportEventTypeEXT(value);
    else if (typename_ == sv("VkDeviceGroupPresentModeFlagBitsKHR")) return enum_name_VkDeviceGroupPresentModeFlagBitsKHR(value);
    else if (typename_ == sv("VkDeviceFaultVendorBinaryHeaderVersionEXT")) return enum_name_VkDeviceFaultVendorBinaryHeaderVersionEXT(value);
    else if (typename_ == sv("VkDeviceFaultAddressTypeEXT")) return enum_name_VkDeviceFaultAddressTypeEXT(value);
    else if (typename_ == sv("VkDeviceEventTypeEXT")) return enum_name_VkDeviceEventTypeEXT(value);
    else if (typename_ == sv("VkDeviceDiagnosticsConfigFlagBitsNV")) return enum_name_VkDeviceDiagnosticsConfigFlagBitsNV(value);
    else if (typename_ == sv("VkDeviceAddressBindingTypeEXT")) return enum_name_VkDeviceAddressBindingTypeEXT(value);
    else if (typename_ == sv("VkDeviceAddressBindingFlagBitsEXT")) return enum_name_VkDeviceAddressBindingFlagBitsEXT(value);
    else if (typename_ == sv("VkDescriptorUpdateTemplateType")) return enum_name_VkDescriptorUpdateTemplateType(value);
    else if (typename_ == sv("VkDescriptorType")) return enum_name_VkDescriptorType(value);
    else if (typename_ == sv("VkDescriptorSetLayoutCreateFlagBits")) return enum_name_VkDescriptorSetLayoutCreateFlagBits(value);
    else if (typename_ == sv("VkDescriptorPoolCreateFlagBits")) return enum_name_VkDescriptorPoolCreateFlagBits(value);
    else if (typename_ == sv("VkDescriptorMappingSourceEXT")) return enum_name_VkDescriptorMappingSourceEXT(value);
    else if (typename_ == sv("VkDescriptorBindingFlagBits")) return enum_name_VkDescriptorBindingFlagBits(value);
    else if (typename_ == sv("VkDepthClampModeEXT")) return enum_name_VkDepthClampModeEXT(value);
    else if (typename_ == sv("VkDepthBiasRepresentationEXT")) return enum_name_VkDepthBiasRepresentationEXT(value);
    else if (typename_ == sv("VkDependencyFlagBits")) return enum_name_VkDependencyFlagBits(value);
    else if (typename_ == sv("VkDefaultVertexAttributeValueKHR")) return enum_name_VkDefaultVertexAttributeValueKHR(value);
    else if (typename_ == sv("VkDebugUtilsMessageTypeFlagBitsEXT")) return enum_name_VkDebugUtilsMessageTypeFlagBitsEXT(value);
    else if (typename_ == sv("VkDebugUtilsMessageSeverityFlagBitsEXT")) return enum_name_VkDebugUtilsMessageSeverityFlagBitsEXT(value);
    else if (typename_ == sv("VkDebugReportObjectTypeEXT")) return enum_name_VkDebugReportObjectTypeEXT(value);
    else if (typename_ == sv("VkDebugReportFlagBitsEXT")) return enum_name_VkDebugReportFlagBitsEXT(value);
    else if (typename_ == sv("VkDataGraphPipelineSessionBindPointTypeARM")) return enum_name_VkDataGraphPipelineSessionBindPointTypeARM(value);
    else if (typename_ == sv("VkDataGraphPipelineSessionBindPointARM")) return enum_name_VkDataGraphPipelineSessionBindPointARM(value);
    else if (typename_ == sv("VkDataGraphPipelinePropertyARM")) return enum_name_VkDataGraphPipelinePropertyARM(value);
    else if (typename_ == sv("VkDataGraphModelCacheTypeQCOM")) return enum_name_VkDataGraphModelCacheTypeQCOM(value);
    else if (typename_ == sv("VkCullModeFlagBits")) return enum_name_VkCullModeFlagBits(value);
    else if (typename_ == sv("VkCubicFilterWeightsQCOM")) return enum_name_VkCubicFilterWeightsQCOM(value);
    else if (typename_ == sv("VkCoverageReductionModeNV")) return enum_name_VkCoverageReductionModeNV(value);
    else if (typename_ == sv("VkCoverageModulationModeNV")) return enum_name_VkCoverageModulationModeNV(value);
    else if (typename_ == sv("VkCopyMicromapModeEXT")) return enum_name_VkCopyMicromapModeEXT(value);
    else if (typename_ == sv("VkCopyAccelerationStructureModeKHR")) return enum_name_VkCopyAccelerationStructureModeKHR(value);
    else if (typename_ == sv("VkCooperativeVectorMatrixLayoutNV")) return enum_name_VkCooperativeVectorMatrixLayoutNV(value);
    else if (typename_ == sv("VkConservativeRasterizationModeEXT")) return enum_name_VkConservativeRasterizationModeEXT(value);
    else if (typename_ == sv("VkConditionalRenderingFlagBitsEXT")) return enum_name_VkConditionalRenderingFlagBitsEXT(value);
    else if (typename_ == sv("VkCompositeAlphaFlagBitsKHR")) return enum_name_VkCompositeAlphaFlagBitsKHR(value);
    else if (typename_ == sv("VkComponentTypeKHR")) return enum_name_VkComponentTypeKHR(value);
    else if (typename_ == sv("VkComponentSwizzle")) return enum_name_VkComponentSwizzle(value);
    else if (typename_ == sv("VkCompareOp")) return enum_name_VkCompareOp(value);
    else if (typename_ == sv("VkCommandPoolResetFlagBits")) return enum_name_VkCommandPoolResetFlagBits(value);
    else if (typename_ == sv("VkCommandPoolCreateFlagBits")) return enum_name_VkCommandPoolCreateFlagBits(value);
    else if (typename_ == sv("VkCommandBufferUsageFlagBits")) return enum_name_VkCommandBufferUsageFlagBits(value);
    else if (typename_ == sv("VkCommandBufferResetFlagBits")) return enum_name_VkCommandBufferResetFlagBits(value);
    else if (typename_ == sv("VkCommandBufferLevel")) return enum_name_VkCommandBufferLevel(value);
    else if (typename_ == sv("VkColorSpaceKHR")) return enum_name_VkColorSpaceKHR(value);
    else if (typename_ == sv("VkColorComponentFlagBits")) return enum_name_VkColorComponentFlagBits(value);
    else if (typename_ == sv("VkCoarseSampleOrderTypeNV")) return enum_name_VkCoarseSampleOrderTypeNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureTypeNV")) return enum_name_VkClusterAccelerationStructureTypeNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureOpTypeNV")) return enum_name_VkClusterAccelerationStructureOpTypeNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureOpModeNV")) return enum_name_VkClusterAccelerationStructureOpModeNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureIndexFormatFlagBitsNV")) return enum_name_VkClusterAccelerationStructureIndexFormatFlagBitsNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureGeometryFlagBitsNV")) return enum_name_VkClusterAccelerationStructureGeometryFlagBitsNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureClusterFlagBitsNV")) return enum_name_VkClusterAccelerationStructureClusterFlagBitsNV(value);
    else if (typename_ == sv("VkClusterAccelerationStructureAddressResolutionFlagBitsNV")) return enum_name_VkClusterAccelerationStructureAddressResolutionFlagBitsNV(value);
    else if (typename_ == sv("VkChromaLocation")) return enum_name_VkChromaLocation(value);
    else if (typename_ == sv("VkBuildMicromapModeEXT")) return enum_name_VkBuildMicromapModeEXT(value);
    else if (typename_ == sv("VkBuildMicromapFlagBitsEXT")) return enum_name_VkBuildMicromapFlagBitsEXT(value);
    else if (typename_ == sv("VkBuildAccelerationStructureModeKHR")) return enum_name_VkBuildAccelerationStructureModeKHR(value);
    else if (typename_ == sv("VkBuildAccelerationStructureFlagBitsKHR")) return enum_name_VkBuildAccelerationStructureFlagBitsKHR(value);
    else if (typename_ == sv("VkBufferUsageFlagBits")) return enum_name_VkBufferUsageFlagBits(value);
    else if (typename_ == sv("VkBufferCreateFlagBits")) return enum_name_VkBufferCreateFlagBits(value);
    else if (typename_ == sv("VkBorderColor")) return enum_name_VkBorderColor(value);
    else if (typename_ == sv("VkBlockMatchWindowCompareModeQCOM")) return enum_name_VkBlockMatchWindowCompareModeQCOM(value);
    else if (typename_ == sv("VkBlendOverlapEXT")) return enum_name_VkBlendOverlapEXT(value);
    else if (typename_ == sv("VkBlendOp")) return enum_name_VkBlendOp(value);
    else if (typename_ == sv("VkBlendFactor")) return enum_name_VkBlendFactor(value);
    else if (typename_ == sv("VkAttachmentStoreOp")) return enum_name_VkAttachmentStoreOp(value);
    else if (typename_ == sv("VkAttachmentLoadOp")) return enum_name_VkAttachmentLoadOp(value);
    else if (typename_ == sv("VkAttachmentDescriptionFlagBits")) return enum_name_VkAttachmentDescriptionFlagBits(value);
    else if (typename_ == sv("VkAntiLagStageAMD")) return enum_name_VkAntiLagStageAMD(value);
    else if (typename_ == sv("VkAntiLagModeAMD")) return enum_name_VkAntiLagModeAMD(value);
    else if (typename_ == sv("VkAddressCopyFlagBitsKHR")) return enum_name_VkAddressCopyFlagBitsKHR(value);
    else if (typename_ == sv("VkAcquireProfilingLockFlagBitsKHR")) return enum_name_VkAcquireProfilingLockFlagBitsKHR(value);
    else if (typename_ == sv("VkAccessFlagBits")) return enum_name_VkAccessFlagBits(value);
    else if (typename_ == sv("VkAccelerationStructureTypeKHR")) return enum_name_VkAccelerationStructureTypeKHR(value);
    else if (typename_ == sv("VkAccelerationStructureMotionInstanceTypeNV")) return enum_name_VkAccelerationStructureMotionInstanceTypeNV(value);
    else if (typename_ == sv("VkAccelerationStructureMemoryRequirementsTypeNV")) return enum_name_VkAccelerationStructureMemoryRequirementsTypeNV(value);
    else if (typename_ == sv("VkAccelerationStructureCreateFlagBitsKHR")) return enum_name_VkAccelerationStructureCreateFlagBitsKHR(value);
    else if (typename_ == sv("VkAccelerationStructureCompatibilityKHR")) return enum_name_VkAccelerationStructureCompatibilityKHR(value);
    else if (typename_ == sv("VkAccelerationStructureBuildTypeKHR")) return enum_name_VkAccelerationStructureBuildTypeKHR(value);
    else return sv(nullptr);
}

string_view_t enum_name_VkViewportCoordinateSwizzleNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV");
    case 1: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV");
    case 2: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV");
    case 3: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV");
    case 4: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV");
    case 5: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV");
    case 6: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV");
    case 7: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV");
    case 2147483647: return sv("VK_VIEWPORT_COORDINATE_SWIZZLE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoSessionParametersCreateFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_SESSION_PARAMETERS_CREATE_QUANTIZATION_MAP_COMPATIBLE_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_SESSION_PARAMETERS_CREATE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoSessionCreateFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_SESSION_CREATE_PROTECTED_CONTENT_BIT_KHR");
    case 2: return sv("VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_PARAMETER_OPTIMIZATIONS_BIT_KHR");
    case 4: return sv("VK_VIDEO_SESSION_CREATE_INLINE_QUERIES_BIT_KHR");
    case 8: return sv("VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR");
    case 16: return sv("VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_EMPHASIS_MAP_BIT_KHR");
    case 32: return sv("VK_VIDEO_SESSION_CREATE_INLINE_SESSION_PARAMETERS_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_SESSION_CREATE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeUsageFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_USAGE_DEFAULT_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_USAGE_TRANSCODING_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_USAGE_STREAMING_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_USAGE_RECORDING_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_USAGE_CONFERENCING_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_USAGE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeTuningModeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_TUNING_MODE_DEFAULT_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_TUNING_MODE_HIGH_QUALITY_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_TUNING_MODE_LOW_LATENCY_KHR");
    case 3: return sv("VK_VIDEO_ENCODE_TUNING_MODE_ULTRA_LOW_LATENCY_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_TUNING_MODE_LOSSLESS_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_TUNING_MODE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeRgbRangeCompressionFlagBitsVALVE(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_RGB_RANGE_COMPRESSION_FULL_RANGE_BIT_VALVE");
    case 2: return sv("VK_VIDEO_ENCODE_RGB_RANGE_COMPRESSION_NARROW_RANGE_BIT_VALVE");
    case 2147483647: return sv("VK_VIDEO_ENCODE_RGB_RANGE_COMPRESSION_FLAG_BITS_MAX_ENUM_VALVE");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeRgbModelConversionFlagBitsVALVE(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_RGB_IDENTITY_BIT_VALVE");
    case 2: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_YCBCR_IDENTITY_BIT_VALVE");
    case 4: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_YCBCR_709_BIT_VALVE");
    case 8: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_YCBCR_601_BIT_VALVE");
    case 16: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_YCBCR_2020_BIT_VALVE");
    case 2147483647: return sv("VK_VIDEO_ENCODE_RGB_MODEL_CONVERSION_FLAG_BITS_MAX_ENUM_VALVE");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeRgbChromaOffsetFlagBitsVALVE(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_RGB_CHROMA_OFFSET_COSITED_EVEN_BIT_VALVE");
    case 2: return sv("VK_VIDEO_ENCODE_RGB_CHROMA_OFFSET_MIDPOINT_BIT_VALVE");
    case 2147483647: return sv("VK_VIDEO_ENCODE_RGB_CHROMA_OFFSET_FLAG_BITS_MAX_ENUM_VALVE");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeRateControlModeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DEFAULT_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DISABLED_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_RATE_CONTROL_MODE_VBR_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_RATE_CONTROL_MODE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeIntraRefreshModeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_NONE_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_PER_PICTURE_PARTITION_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_BLOCK_BASED_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_BLOCK_ROW_BASED_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_BLOCK_COLUMN_BASED_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_MODE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH265TransformBlockSizeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_4_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_8_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_16_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_32_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH265StdFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H265_STD_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H265_STD_SAMPLE_ADAPTIVE_OFFSET_ENABLED_FLAG_SET_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H265_STD_SCALING_LIST_DATA_PRESENT_FLAG_SET_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H265_STD_PCM_ENABLED_FLAG_SET_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H265_STD_SPS_TEMPORAL_MVP_ENABLED_FLAG_SET_BIT_KHR");
    case 32: return sv("VK_VIDEO_ENCODE_H265_STD_INIT_QP_MINUS26_BIT_KHR");
    case 64: return sv("VK_VIDEO_ENCODE_H265_STD_WEIGHTED_PRED_FLAG_SET_BIT_KHR");
    case 128: return sv("VK_VIDEO_ENCODE_H265_STD_WEIGHTED_BIPRED_FLAG_SET_BIT_KHR");
    case 256: return sv("VK_VIDEO_ENCODE_H265_STD_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_KHR");
    case 512: return sv("VK_VIDEO_ENCODE_H265_STD_SIGN_DATA_HIDING_ENABLED_FLAG_SET_BIT_KHR");
    case 1024: return sv("VK_VIDEO_ENCODE_H265_STD_TRANSFORM_SKIP_ENABLED_FLAG_SET_BIT_KHR");
    case 2048: return sv("VK_VIDEO_ENCODE_H265_STD_TRANSFORM_SKIP_ENABLED_FLAG_UNSET_BIT_KHR");
    case 4096: return sv("VK_VIDEO_ENCODE_H265_STD_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_FLAG_SET_BIT_KHR");
    case 8192: return sv("VK_VIDEO_ENCODE_H265_STD_TRANSQUANT_BYPASS_ENABLED_FLAG_SET_BIT_KHR");
    case 16384: return sv("VK_VIDEO_ENCODE_H265_STD_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR");
    case 32768: return sv("VK_VIDEO_ENCODE_H265_STD_ENTROPY_CODING_SYNC_ENABLED_FLAG_SET_BIT_KHR");
    case 65536: return sv("VK_VIDEO_ENCODE_H265_STD_DEBLOCKING_FILTER_OVERRIDE_ENABLED_FLAG_SET_BIT_KHR");
    case 131072: return sv("VK_VIDEO_ENCODE_H265_STD_DEPENDENT_SLICE_SEGMENTS_ENABLED_FLAG_SET_BIT_KHR");
    case 262144: return sv("VK_VIDEO_ENCODE_H265_STD_DEPENDENT_SLICE_SEGMENT_FLAG_SET_BIT_KHR");
    case 524288: return sv("VK_VIDEO_ENCODE_H265_STD_SLICE_QP_DELTA_BIT_KHR");
    case 1048576: return sv("VK_VIDEO_ENCODE_H265_STD_DIFFERENT_SLICE_QP_DELTA_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H265_STD_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH265RateControlFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_ATTEMPT_HRD_COMPLIANCE_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_REGULAR_GOP_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_TEMPORAL_SUB_LAYER_PATTERN_DYADIC_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H265_RATE_CONTROL_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH265CtbSizeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H265_CTB_SIZE_16_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H265_CTB_SIZE_32_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H265_CTB_SIZE_64_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H265_CTB_SIZE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH265CapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_HRD_COMPLIANCE_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_ROW_UNALIGNED_SLICE_SEGMENT_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_SLICE_SEGMENT_TYPE_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L0_LIST_BIT_KHR");
    case 32: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_KHR");
    case 64: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR");
    case 128: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_PER_SLICE_SEGMENT_CONSTANT_QP_BIT_KHR");
    case 256: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILES_PER_SLICE_SEGMENT_BIT_KHR");
    case 512: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_SLICE_SEGMENTS_PER_TILE_BIT_KHR");
    case 2048: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_B_PICTURE_INTRA_REFRESH_BIT_KHR");
    case 1024: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_CU_QP_DIFF_WRAPAROUND_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H265_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH264StdFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H264_STD_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H264_STD_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_FLAG_SET_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H264_STD_SCALING_MATRIX_PRESENT_FLAG_SET_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H264_STD_CHROMA_QP_INDEX_OFFSET_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H264_STD_SECOND_CHROMA_QP_INDEX_OFFSET_BIT_KHR");
    case 32: return sv("VK_VIDEO_ENCODE_H264_STD_PIC_INIT_QP_MINUS26_BIT_KHR");
    case 64: return sv("VK_VIDEO_ENCODE_H264_STD_WEIGHTED_PRED_FLAG_SET_BIT_KHR");
    case 128: return sv("VK_VIDEO_ENCODE_H264_STD_WEIGHTED_BIPRED_IDC_EXPLICIT_BIT_KHR");
    case 256: return sv("VK_VIDEO_ENCODE_H264_STD_WEIGHTED_BIPRED_IDC_IMPLICIT_BIT_KHR");
    case 512: return sv("VK_VIDEO_ENCODE_H264_STD_TRANSFORM_8X8_MODE_FLAG_SET_BIT_KHR");
    case 1024: return sv("VK_VIDEO_ENCODE_H264_STD_DIRECT_SPATIAL_MV_PRED_FLAG_UNSET_BIT_KHR");
    case 2048: return sv("VK_VIDEO_ENCODE_H264_STD_ENTROPY_CODING_MODE_FLAG_UNSET_BIT_KHR");
    case 4096: return sv("VK_VIDEO_ENCODE_H264_STD_ENTROPY_CODING_MODE_FLAG_SET_BIT_KHR");
    case 8192: return sv("VK_VIDEO_ENCODE_H264_STD_DIRECT_8X8_INFERENCE_FLAG_UNSET_BIT_KHR");
    case 16384: return sv("VK_VIDEO_ENCODE_H264_STD_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR");
    case 32768: return sv("VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_DISABLED_BIT_KHR");
    case 65536: return sv("VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_ENABLED_BIT_KHR");
    case 131072: return sv("VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_PARTIAL_BIT_KHR");
    case 524288: return sv("VK_VIDEO_ENCODE_H264_STD_SLICE_QP_DELTA_BIT_KHR");
    case 1048576: return sv("VK_VIDEO_ENCODE_H264_STD_DIFFERENT_SLICE_QP_DELTA_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H264_STD_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH264RateControlFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_ATTEMPT_HRD_COMPLIANCE_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_REGULAR_GOP_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H264_RATE_CONTROL_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeH264CapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_HRD_COMPLIANCE_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_ROW_UNALIGNED_SLICE_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L0_LIST_BIT_KHR");
    case 32: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_KHR");
    case 64: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR");
    case 128: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_PER_SLICE_CONSTANT_QP_BIT_KHR");
    case 256: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_GENERATE_PREFIX_NALU_BIT_KHR");
    case 1024: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_B_PICTURE_INTRA_REFRESH_BIT_KHR");
    case 512: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_MB_QP_DIFF_WRAPAROUND_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_H264_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 4: return sv("VK_VIDEO_ENCODE_INTRA_REFRESH_BIT_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_WITH_QUANTIZATION_DELTA_MAP_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_WITH_EMPHASIS_MAP_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeFeedbackFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BUFFER_OFFSET_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BYTES_WRITTEN_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_HAS_OVERRIDES_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_FEEDBACK_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeContentFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_CONTENT_DEFAULT_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_CONTENT_CAMERA_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_CONTENT_DESKTOP_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_CONTENT_RENDERED_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_CONTENT_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeCapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_CAPABILITY_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_CAPABILITY_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_DETECTION_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_CAPABILITY_QUANTIZATION_DELTA_MAP_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_CAPABILITY_EMPHASIS_MAP_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1SuperblockSizeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_AV1_SUPERBLOCK_SIZE_64_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_SUPERBLOCK_SIZE_128_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_SUPERBLOCK_SIZE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1StdFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_AV1_STD_UNIFORM_TILE_SPACING_FLAG_SET_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_STD_SKIP_MODE_PRESENT_UNSET_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_AV1_STD_PRIMARY_REF_FRAME_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_AV1_STD_DELTA_Q_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_STD_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1RateControlGroupKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_INTRA_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_PREDICTIVE_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_BIPREDICTIVE_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1RateControlFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REGULAR_GOP_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_RATE_CONTROL_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1PredictionModeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_INTRA_ONLY_KHR");
    case 1: return sv("VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_SINGLE_REFERENCE_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_UNIDIRECTIONAL_COMPOUND_KHR");
    case 3: return sv("VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_BIDIRECTIONAL_COMPOUND_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoEncodeAV1CapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_PER_RATE_CONTROL_GROUP_MIN_MAX_Q_INDEX_BIT_KHR");
    case 2: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_GENERATE_OBU_EXTENSION_HEADER_BIT_KHR");
    case 4: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_PRIMARY_REFERENCE_CDF_ONLY_BIT_KHR");
    case 8: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_FRAME_SIZE_OVERRIDE_BIT_KHR");
    case 16: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_MOTION_VECTOR_SCALING_BIT_KHR");
    case 32: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_COMPOUND_PREDICTION_INTRA_REFRESH_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_ENCODE_AV1_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoDecodeUsageFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_DECODE_USAGE_DEFAULT_KHR");
    case 1: return sv("VK_VIDEO_DECODE_USAGE_TRANSCODING_BIT_KHR");
    case 2: return sv("VK_VIDEO_DECODE_USAGE_OFFLINE_BIT_KHR");
    case 4: return sv("VK_VIDEO_DECODE_USAGE_STREAMING_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_DECODE_USAGE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoDecodeH264PictureLayoutFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_KHR");
    case 1: return sv("VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_KHR");
    case 2: return sv("VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_SEPARATE_PLANES_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoDecodeCapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_COINCIDE_BIT_KHR");
    case 2: return sv("VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_DISTINCT_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_DECODE_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoComponentBitDepthFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR");
    case 1: return sv("VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR");
    case 4: return sv("VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR");
    case 16: return sv("VK_VIDEO_COMPONENT_BIT_DEPTH_12_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_COMPONENT_BIT_DEPTH_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoCodingControlFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_CODING_CONTROL_RESET_BIT_KHR");
    case 2: return sv("VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_BIT_KHR");
    case 4: return sv("VK_VIDEO_CODING_CONTROL_ENCODE_QUALITY_LEVEL_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_CODING_CONTROL_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoCodecOperationFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_CODEC_OPERATION_NONE_KHR");
    case 65536: return sv("VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_KHR");
    case 131072: return sv("VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_KHR");
    case 1: return sv("VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR");
    case 2: return sv("VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR");
    case 4: return sv("VK_VIDEO_CODEC_OPERATION_DECODE_AV1_BIT_KHR");
    case 262144: return sv("VK_VIDEO_CODEC_OPERATION_ENCODE_AV1_BIT_KHR");
    case 8: return sv("VK_VIDEO_CODEC_OPERATION_DECODE_VP9_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_CODEC_OPERATION_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoChromaSubsamplingFlagBitsKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_INVALID_KHR");
    case 1: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_MONOCHROME_BIT_KHR");
    case 2: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_420_BIT_KHR");
    case 4: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_422_BIT_KHR");
    case 8: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_444_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_CHROMA_SUBSAMPLING_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVideoCapabilityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VIDEO_CAPABILITY_PROTECTED_CONTENT_BIT_KHR");
    case 2: return sv("VK_VIDEO_CAPABILITY_SEPARATE_REFERENCE_IMAGES_BIT_KHR");
    case 2147483647: return sv("VK_VIDEO_CAPABILITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVertexInputRate(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VERTEX_INPUT_RATE_VERTEX");
    case 1: return sv("VK_VERTEX_INPUT_RATE_INSTANCE");
    case 2147483647: return sv("VK_VERTEX_INPUT_RATE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkVendorId(int64_t value) {
    switch (value) {
    case 65536: return sv("VK_VENDOR_ID_KHRONOS");
    case 65537: return sv("VK_VENDOR_ID_VIV");
    case 65538: return sv("VK_VENDOR_ID_VSI");
    case 65539: return sv("VK_VENDOR_ID_KAZAN");
    case 65540: return sv("VK_VENDOR_ID_CODEPLAY");
    case 65541: return sv("VK_VENDOR_ID_MESA");
    case 65542: return sv("VK_VENDOR_ID_POCL");
    case 65543: return sv("VK_VENDOR_ID_MOBILEYE");
    case 2147483647: return sv("VK_VENDOR_ID_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkValidationFeatureEnableEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT");
    case 1: return sv("VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT");
    case 2: return sv("VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT");
    case 3: return sv("VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT");
    case 4: return sv("VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT");
    case 2147483647: return sv("VK_VALIDATION_FEATURE_ENABLE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkValidationFeatureDisableEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VALIDATION_FEATURE_DISABLE_ALL_EXT");
    case 1: return sv("VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT");
    case 2: return sv("VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT");
    case 3: return sv("VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT");
    case 4: return sv("VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT");
    case 5: return sv("VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT");
    case 6: return sv("VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT");
    case 7: return sv("VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT");
    case 2147483647: return sv("VK_VALIDATION_FEATURE_DISABLE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkValidationCheckEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_VALIDATION_CHECK_ALL_EXT");
    case 1: return sv("VK_VALIDATION_CHECK_SHADERS_EXT");
    case 2147483647: return sv("VK_VALIDATION_CHECK_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkValidationCacheHeaderVersionEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT");
    case 2147483647: return sv("VK_VALIDATION_CACHE_HEADER_VERSION_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkToolPurposeFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_TOOL_PURPOSE_VALIDATION_BIT");
    case 2: return sv("VK_TOOL_PURPOSE_PROFILING_BIT");
    case 4: return sv("VK_TOOL_PURPOSE_TRACING_BIT");
    case 8: return sv("VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT");
    case 16: return sv("VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT");
    case 32: return sv("VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT");
    case 64: return sv("VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT");
    // case 1: return sv("VK_TOOL_PURPOSE_VALIDATION_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_TOOL_PURPOSE_PROFILING_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_TOOL_PURPOSE_TRACING_BIT_EXT"); // duplicate value
    // case 8: return sv("VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT"); // duplicate value
    // case 16: return sv("VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_TOOL_PURPOSE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkTimeDomainKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_TIME_DOMAIN_DEVICE_KHR");
    case 1: return sv("VK_TIME_DOMAIN_CLOCK_MONOTONIC_KHR");
    case 2: return sv("VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_KHR");
    case 3: return sv("VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_KHR");
    case 1000208000: return sv("VK_TIME_DOMAIN_PRESENT_STAGE_LOCAL_EXT");
    case 1000208001: return sv("VK_TIME_DOMAIN_SWAPCHAIN_LOCAL_EXT");
    // case 0: return sv("VK_TIME_DOMAIN_DEVICE_EXT"); // duplicate value
    // case 1: return sv("VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT"); // duplicate value
    // case 2: return sv("VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT"); // duplicate value
    // case 3: return sv("VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT"); // duplicate value
    case 2147483647: return sv("VK_TIME_DOMAIN_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkTileShadingRenderPassFlagBitsQCOM(int64_t value) {
    switch (value) {
    case 1: return sv("VK_TILE_SHADING_RENDER_PASS_ENABLE_BIT_QCOM");
    case 2: return sv("VK_TILE_SHADING_RENDER_PASS_PER_TILE_EXECUTION_BIT_QCOM");
    case 2147483647: return sv("VK_TILE_SHADING_RENDER_PASS_FLAG_BITS_MAX_ENUM_QCOM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkTessellationDomainOrigin(int64_t value) {
    switch (value) {
    case 0: return sv("VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT");
    case 1: return sv("VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT");
    // case 0: return sv("VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR"); // duplicate value
    // case 1: return sv("VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR"); // duplicate value
    case 2147483647: return sv("VK_TESSELLATION_DOMAIN_ORIGIN_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkTensorTilingARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_TENSOR_TILING_OPTIMAL_ARM");
    case 1: return sv("VK_TENSOR_TILING_LINEAR_ARM");
    case 2147483647: return sv("VK_TENSOR_TILING_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSystemAllocationScope(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SYSTEM_ALLOCATION_SCOPE_COMMAND");
    case 1: return sv("VK_SYSTEM_ALLOCATION_SCOPE_OBJECT");
    case 2: return sv("VK_SYSTEM_ALLOCATION_SCOPE_CACHE");
    case 3: return sv("VK_SYSTEM_ALLOCATION_SCOPE_DEVICE");
    case 4: return sv("VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE");
    case 2147483647: return sv("VK_SYSTEM_ALLOCATION_SCOPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSwapchainCreateFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR");
    case 2: return sv("VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR");
    case 4: return sv("VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR");
    case 512: return sv("VK_SWAPCHAIN_CREATE_PRESENT_TIMING_BIT_EXT");
    case 64: return sv("VK_SWAPCHAIN_CREATE_PRESENT_ID_2_BIT_KHR");
    case 128: return sv("VK_SWAPCHAIN_CREATE_PRESENT_WAIT_2_BIT_KHR");
    case 8: return sv("VK_SWAPCHAIN_CREATE_DEFERRED_MEMORY_ALLOCATION_BIT_KHR");
    // case 8: return sv("VK_SWAPCHAIN_CREATE_DEFERRED_MEMORY_ALLOCATION_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_SWAPCHAIN_CREATE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSurfaceTransformFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR");
    case 2: return sv("VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR");
    case 4: return sv("VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR");
    case 8: return sv("VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR");
    case 16: return sv("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR");
    case 32: return sv("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR");
    case 64: return sv("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR");
    case 128: return sv("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR");
    case 256: return sv("VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR");
    case 2147483647: return sv("VK_SURFACE_TRANSFORM_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSurfaceCounterFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SURFACE_COUNTER_VBLANK_BIT_EXT");
    // case 1: return sv("VK_SURFACE_COUNTER_VBLANK_EXT"); // duplicate value
    case 2147483647: return sv("VK_SURFACE_COUNTER_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSubpassMergeStatusEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SUBPASS_MERGE_STATUS_MERGED_EXT");
    case 1: return sv("VK_SUBPASS_MERGE_STATUS_DISALLOWED_EXT");
    case 2: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SIDE_EFFECTS_EXT");
    case 3: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SAMPLES_MISMATCH_EXT");
    case 4: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_VIEWS_MISMATCH_EXT");
    case 5: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_ALIASING_EXT");
    case 6: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPENDENCIES_EXT");
    case 7: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT");
    case 8: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT");
    case 9: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INSUFFICIENT_STORAGE_EXT");
    case 10: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT");
    case 11: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT");
    case 12: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SINGLE_SUBPASS_EXT");
    case 13: return sv("VK_SUBPASS_MERGE_STATUS_NOT_MERGED_UNSPECIFIED_EXT");
    case 2147483647: return sv("VK_SUBPASS_MERGE_STATUS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSubpassDescriptionFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX");
    case 2: return sv("VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX");
    case 256: return sv("VK_SUBPASS_DESCRIPTION_TILE_SHADING_APRON_BIT_QCOM");
    case 16: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT");
    case 32: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT");
    case 64: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT");
    case 128: return sv("VK_SUBPASS_DESCRIPTION_ENABLE_LEGACY_DITHERING_BIT_EXT");
    case 4: return sv("VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_EXT");
    case 8: return sv("VK_SUBPASS_DESCRIPTION_CUSTOM_RESOLVE_BIT_EXT");
    // case 4: return sv("VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM"); // duplicate value
    // case 8: return sv("VK_SUBPASS_DESCRIPTION_SHADER_RESOLVE_BIT_QCOM"); // duplicate value
    // case 16: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_ARM"); // duplicate value
    // case 32: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_ARM"); // duplicate value
    // case 64: return sv("VK_SUBPASS_DESCRIPTION_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_ARM"); // duplicate value
    case 2147483647: return sv("VK_SUBPASS_DESCRIPTION_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSubpassContents(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SUBPASS_CONTENTS_INLINE");
    case 1: return sv("VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS");
    case 1000451000: return sv("VK_SUBPASS_CONTENTS_INLINE_AND_SECONDARY_COMMAND_BUFFERS_KHR");
    // case 1000451000: return sv("VK_SUBPASS_CONTENTS_INLINE_AND_SECONDARY_COMMAND_BUFFERS_EXT"); // duplicate value
    case 2147483647: return sv("VK_SUBPASS_CONTENTS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSubmitFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SUBMIT_PROTECTED_BIT");
    // case 1: return sv("VK_SUBMIT_PROTECTED_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_SUBMIT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSubgroupFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SUBGROUP_FEATURE_BASIC_BIT");
    case 2: return sv("VK_SUBGROUP_FEATURE_VOTE_BIT");
    case 4: return sv("VK_SUBGROUP_FEATURE_ARITHMETIC_BIT");
    case 8: return sv("VK_SUBGROUP_FEATURE_BALLOT_BIT");
    case 16: return sv("VK_SUBGROUP_FEATURE_SHUFFLE_BIT");
    case 32: return sv("VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT");
    case 64: return sv("VK_SUBGROUP_FEATURE_CLUSTERED_BIT");
    case 128: return sv("VK_SUBGROUP_FEATURE_QUAD_BIT");
    case 512: return sv("VK_SUBGROUP_FEATURE_ROTATE_BIT");
    case 1024: return sv("VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT");
    case 256: return sv("VK_SUBGROUP_FEATURE_PARTITIONED_BIT_EXT");
    // case 256: return sv("VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV"); // duplicate value
    // case 512: return sv("VK_SUBGROUP_FEATURE_ROTATE_BIT_KHR"); // duplicate value
    // case 1024: return sv("VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_SUBGROUP_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkStructureType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_STRUCTURE_TYPE_APPLICATION_INFO");
    case 1: return sv("VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO");
    case 2: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO");
    case 3: return sv("VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO");
    case 4: return sv("VK_STRUCTURE_TYPE_SUBMIT_INFO");
    case 5: return sv("VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO");
    case 6: return sv("VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE");
    case 7: return sv("VK_STRUCTURE_TYPE_BIND_SPARSE_INFO");
    case 8: return sv("VK_STRUCTURE_TYPE_FENCE_CREATE_INFO");
    case 9: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO");
    case 10: return sv("VK_STRUCTURE_TYPE_EVENT_CREATE_INFO");
    case 11: return sv("VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO");
    case 12: return sv("VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO");
    case 13: return sv("VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO");
    case 14: return sv("VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO");
    case 15: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO");
    case 16: return sv("VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO");
    case 17: return sv("VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO");
    case 18: return sv("VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO");
    case 19: return sv("VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO");
    case 20: return sv("VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO");
    case 21: return sv("VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO");
    case 22: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO");
    case 23: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO");
    case 24: return sv("VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO");
    case 25: return sv("VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO");
    case 26: return sv("VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO");
    case 27: return sv("VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO");
    case 28: return sv("VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO");
    case 29: return sv("VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO");
    case 30: return sv("VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO");
    case 31: return sv("VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO");
    case 32: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO");
    case 33: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO");
    case 34: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO");
    case 35: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET");
    case 36: return sv("VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET");
    case 37: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO");
    case 38: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO");
    case 39: return sv("VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO");
    case 40: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO");
    case 41: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO");
    case 42: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO");
    case 43: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO");
    case 44: return sv("VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER");
    case 45: return sv("VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER");
    case 46: return sv("VK_STRUCTURE_TYPE_MEMORY_BARRIER");
    case 47: return sv("VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO");
    case 48: return sv("VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO");
    case 1000157000: return sv("VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO");
    case 1000157001: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO");
    case 1000127000: return sv("VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS");
    case 1000127001: return sv("VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO");
    case 1000060000: return sv("VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO");
    case 1000060004: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO");
    case 1000060005: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO");
    case 1000060006: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO");
    case 1000060013: return sv("VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO");
    case 1000060014: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO");
    case 1000070000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES");
    case 1000070001: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO");
    case 1000146000: return sv("VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2");
    case 1000146001: return sv("VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2");
    case 1000146002: return sv("VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2");
    case 1000146003: return sv("VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2");
    case 1000146004: return sv("VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2");
    case 1000059000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2");
    case 1000059001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2");
    case 1000059002: return sv("VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2");
    case 1000059003: return sv("VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2");
    case 1000059004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2");
    case 1000059005: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2");
    case 1000059006: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2");
    case 1000059007: return sv("VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2");
    case 1000059008: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2");
    case 1000117002: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO");
    case 1000145000: return sv("VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO");
    case 1000145001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES");
    case 1000145002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES");
    case 1000145003: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2");
    case 1000071000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO");
    case 1000071001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES");
    case 1000071002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO");
    case 1000071003: return sv("VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES");
    case 1000071004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES");
    case 1000072000: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO");
    case 1000072001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO");
    case 1000072002: return sv("VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO");
    case 1000112000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO");
    case 1000112001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES");
    case 1000113000: return sv("VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO");
    case 1000077000: return sv("VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO");
    case 1000076000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO");
    case 1000076001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES");
    case 1000094000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES");
    case 1000083000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES");
    case 1000120000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES");
    case 1000085000: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO");
    case 1000168000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES");
    case 1000168001: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT");
    case 1000156000: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO");
    case 1000156001: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO");
    case 1000156002: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO");
    case 1000156003: return sv("VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO");
    case 1000156004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES");
    case 1000156005: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES");
    case 1000060003: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO");
    case 1000117000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES");
    case 1000117001: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO");
    case 1000117003: return sv("VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO");
    case 1000053000: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO");
    case 1000053001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES");
    case 1000053002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES");
    case 1000063000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES");
    case 49: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES");
    case 50: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES");
    case 51: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES");
    case 52: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES");
    case 1000147000: return sv("VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO");
    case 1000196000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES");
    case 1000211000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES");
    case 1000261000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES");
    case 1000207000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES");
    case 1000207001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES");
    case 1000207002: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO");
    case 1000207003: return sv("VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO");
    case 1000207004: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO");
    case 1000207005: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO");
    case 1000257000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES");
    case 1000244001: return sv("VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO");
    case 1000257002: return sv("VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO");
    case 1000257003: return sv("VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO");
    case 1000257004: return sv("VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO");
    case 1000177000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES");
    case 1000180000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES");
    case 1000082000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES");
    case 1000197000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES");
    case 1000161000: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO");
    case 1000161001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES");
    case 1000161002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES");
    case 1000161003: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO");
    case 1000161004: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT");
    case 1000221000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES");
    case 1000130000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES");
    case 1000130001: return sv("VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO");
    case 1000253000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES");
    case 1000175000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES");
    case 1000109000: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2");
    case 1000109001: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2");
    case 1000109002: return sv("VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2");
    case 1000109003: return sv("VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2");
    case 1000109004: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2");
    case 1000109005: return sv("VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO");
    case 1000109006: return sv("VK_STRUCTURE_TYPE_SUBPASS_END_INFO");
    case 1000199000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES");
    case 1000199001: return sv("VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE");
    case 1000246000: return sv("VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO");
    case 1000108000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES");
    case 1000108001: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO");
    case 1000108002: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO");
    case 1000108003: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO");
    case 1000241000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES");
    case 1000241001: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT");
    case 1000241002: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT");
    case 53: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES");
    case 54: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES");
    case 1000245000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES");
    case 1000295000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES");
    case 1000295001: return sv("VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO");
    case 1000295002: return sv("VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO");
    case 1000314000: return sv("VK_STRUCTURE_TYPE_MEMORY_BARRIER_2");
    case 1000314001: return sv("VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2");
    case 1000314002: return sv("VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2");
    case 1000314003: return sv("VK_STRUCTURE_TYPE_DEPENDENCY_INFO");
    case 1000314004: return sv("VK_STRUCTURE_TYPE_SUBMIT_INFO_2");
    case 1000314005: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO");
    case 1000314006: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO");
    case 1000314007: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES");
    case 1000337000: return sv("VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2");
    case 1000337001: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2");
    case 1000337002: return sv("VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2");
    case 1000337003: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2");
    case 1000337006: return sv("VK_STRUCTURE_TYPE_BUFFER_COPY_2");
    case 1000337007: return sv("VK_STRUCTURE_TYPE_IMAGE_COPY_2");
    case 1000337009: return sv("VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2");
    case 1000066000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES");
    case 1000360000: return sv("VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3");
    case 1000413000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES");
    case 1000413001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES");
    case 1000413002: return sv("VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS");
    case 1000413003: return sv("VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS");
    case 1000192000: return sv("VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO");
    case 1000215000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES");
    case 1000276000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES");
    case 1000297000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES");
    case 1000325000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES");
    case 1000335000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES");
    case 1000225000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES");
    case 1000225001: return sv("VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO");
    case 1000225002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES");
    case 1000138000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES");
    case 1000138001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES");
    case 1000138002: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK");
    case 1000138003: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO");
    case 1000280000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES");
    case 1000280001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES");
    case 1000281001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES");
    case 1000337004: return sv("VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2");
    case 1000337005: return sv("VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2");
    case 1000337008: return sv("VK_STRUCTURE_TYPE_IMAGE_BLIT_2");
    case 1000337010: return sv("VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2");
    case 1000044000: return sv("VK_STRUCTURE_TYPE_RENDERING_INFO");
    case 1000044001: return sv("VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO");
    case 1000044002: return sv("VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO");
    case 1000044003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES");
    case 1000044004: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO");
    case 55: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES");
    case 56: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES");
    case 1000174000: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO");
    case 1000388000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES");
    case 1000388001: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES");
    case 1000265000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES");
    case 1000271000: return sv("VK_STRUCTURE_TYPE_MEMORY_MAP_INFO");
    case 1000271001: return sv("VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO");
    case 1000470000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES");
    case 1000470001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES");
    case 1000470004: return sv("VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO");
    case 1000338002: return sv("VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2");
    case 1000338003: return sv("VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2");
    case 1000470006: return sv("VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO");
    case 1000545000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES");
    case 1000545001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES");
    case 1000545002: return sv("VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS");
    case 1000270000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES");
    case 1000270001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES");
    case 1000270002: return sv("VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY");
    case 1000270003: return sv("VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY");
    case 1000270004: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO");
    case 1000270005: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO");
    case 1000270006: return sv("VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO");
    case 1000270007: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO");
    case 1000270008: return sv("VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE");
    case 1000270009: return sv("VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY");
    case 1000416000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES");
    case 1000528000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES");
    case 1000544000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES");
    case 1000470005: return sv("VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO");
    case 1000080000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES");
    case 1000545003: return sv("VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO");
    case 1000545004: return sv("VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO");
    case 1000545005: return sv("VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO");
    case 1000545006: return sv("VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO");
    case 1000466000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES");
    case 1000068000: return sv("VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO");
    case 1000068001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES");
    case 1000068002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES");
    case 1000259000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES");
    case 1000259001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO");
    case 1000259002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES");
    case 1000525000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES");
    case 1000190001: return sv("VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO");
    case 1000190002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES");
    case 1000470003: return sv("VK_STRUCTURE_TYPE_RENDERING_AREA_INFO");
    case 1000232000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES");
    case 1000232001: return sv("VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO");
    case 1000232002: return sv("VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO");
    case 1000001000: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR");
    case 1000001001: return sv("VK_STRUCTURE_TYPE_PRESENT_INFO_KHR");
    case 1000060007: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR");
    case 1000060008: return sv("VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR");
    case 1000060009: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR");
    case 1000060010: return sv("VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR");
    case 1000060011: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR");
    case 1000060012: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR");
    case 1000002000: return sv("VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR");
    case 1000002001: return sv("VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR");
    case 1000003000: return sv("VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR");
    case 1000004000: return sv("VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR");
    case 1000005000: return sv("VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR");
    case 1000006000: return sv("VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR");
    case 1000008000: return sv("VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR");
    case 1000009000: return sv("VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR");
    case 1000011000: return sv("VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT");
    case 1000018000: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD");
    case 1000022000: return sv("VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT");
    case 1000022001: return sv("VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT");
    case 1000022002: return sv("VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT");
    case 1000023000: return sv("VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR");
    case 1000023001: return sv("VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR");
    case 1000023002: return sv("VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR");
    case 1000023003: return sv("VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR");
    case 1000023004: return sv("VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR");
    case 1000023005: return sv("VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR");
    case 1000023006: return sv("VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000023007: return sv("VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR");
    case 1000023008: return sv("VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR");
    case 1000023009: return sv("VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR");
    case 1000023010: return sv("VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR");
    case 1000023011: return sv("VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR");
    case 1000023012: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR");
    case 1000023013: return sv("VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR");
    case 1000023014: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR");
    case 1000023015: return sv("VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR");
    case 1000023016: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR");
    case 1000024000: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR");
    case 1000024001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR");
    case 1000024002: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR");
    case 1000026000: return sv("VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV");
    case 1000026001: return sv("VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV");
    case 1000026002: return sv("VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV");
    case 1000028000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT");
    case 1000028001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT");
    case 1000028002: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT");
    case 1000029000: return sv("VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX");
    case 1000029001: return sv("VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX");
    case 1000029002: return sv("VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX");
    case 1000029004: return sv("VK_STRUCTURE_TYPE_CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX");
    case 1000030000: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX");
    case 1000030001: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX");
    case 1000038000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR");
    case 1000038001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000038002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR");
    case 1000038003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR");
    case 1000038004: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR");
    case 1000038005: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR");
    case 1000038006: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR");
    case 1000038007: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR");
    case 1000038008: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR");
    case 1000038009: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR");
    case 1000038010: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR");
    case 1000038011: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR");
    case 1000038012: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR");
    case 1000038013: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR");
    case 1000039000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR");
    case 1000039001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000039002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR");
    case 1000039003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR");
    case 1000039004: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR");
    case 1000039005: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR");
    case 1000039006: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR");
    case 1000039007: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR");
    case 1000039009: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR");
    case 1000039010: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR");
    case 1000039011: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR");
    case 1000039012: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR");
    case 1000039013: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR");
    case 1000039014: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR");
    case 1000040000: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR");
    case 1000040001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR");
    case 1000040003: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR");
    case 1000040004: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000040005: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR");
    case 1000040006: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR");
    case 1000041000: return sv("VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD");
    case 1000049000: return sv("VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP");
    case 1000050000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV");
    case 1000056000: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV");
    case 1000056001: return sv("VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV");
    case 1000057000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV");
    case 1000057001: return sv("VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV");
    case 1000058000: return sv("VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV");
    case 1000061000: return sv("VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT");
    case 1000062000: return sv("VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN");
    case 1000067000: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT");
    case 1000067001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT");
    case 1000073000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
    case 1000073001: return sv("VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR");
    case 1000073002: return sv("VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR");
    case 1000073003: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR");
    case 1000074000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR");
    case 1000074001: return sv("VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR");
    case 1000074002: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR");
    case 1000075000: return sv("VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR");
    case 1000078000: return sv("VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
    case 1000078001: return sv("VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR");
    case 1000078002: return sv("VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR");
    case 1000078003: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR");
    case 1000079000: return sv("VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR");
    case 1000079001: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR");
    case 1000081000: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT");
    case 1000081001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT");
    case 1000081002: return sv("VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT");
    case 1000084000: return sv("VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR");
    case 1000087000: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV");
    case 1000090000: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT");
    case 1000091000: return sv("VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT");
    case 1000091001: return sv("VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT");
    case 1000091002: return sv("VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT");
    case 1000091003: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT");
    case 1000092000: return sv("VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE");
    case 1000097000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX");
    case 1000044009: return sv("VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX");
    case 1000098000: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV");
    case 1000099000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT");
    case 1000099001: return sv("VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT");
    case 1000101000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT");
    case 1000101001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT");
    case 1000102000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT");
    case 1000102001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT");
    case 1000105000: return sv("VK_STRUCTURE_TYPE_HDR_METADATA_EXT");
    case 1000110000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG");
    case 1000111000: return sv("VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR");
    case 1000114000: return sv("VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR");
    case 1000114001: return sv("VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR");
    case 1000114002: return sv("VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR");
    case 1000115000: return sv("VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR");
    case 1000115001: return sv("VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR");
    case 1000116000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR");
    case 1000116001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR");
    case 1000116002: return sv("VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR");
    case 1000116003: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR");
    case 1000116004: return sv("VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR");
    case 1000116005: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR");
    case 1000116006: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR");
    case 1000119000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR");
    case 1000119001: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR");
    case 1000119002: return sv("VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR");
    case 1000121000: return sv("VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR");
    case 1000121001: return sv("VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR");
    case 1000121002: return sv("VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR");
    case 1000121003: return sv("VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR");
    case 1000121004: return sv("VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR");
    case 1000122000: return sv("VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK");
    case 1000123000: return sv("VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK");
    case 1000128000: return sv("VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT");
    case 1000128001: return sv("VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT");
    case 1000128002: return sv("VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT");
    case 1000128003: return sv("VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT");
    case 1000128004: return sv("VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT");
    case 1000129000: return sv("VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID");
    case 1000129001: return sv("VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID");
    case 1000129002: return sv("VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID");
    case 1000129003: return sv("VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
    case 1000129004: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID");
    case 1000129005: return sv("VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID");
    case 1000129006: return sv("VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID");
    case 1000135000: return sv("VK_STRUCTURE_TYPE_TEXEL_BUFFER_DESCRIPTOR_INFO_EXT");
    case 1000135001: return sv("VK_STRUCTURE_TYPE_IMAGE_DESCRIPTOR_INFO_EXT");
    case 1000135002: return sv("VK_STRUCTURE_TYPE_RESOURCE_DESCRIPTOR_INFO_EXT");
    case 1000135003: return sv("VK_STRUCTURE_TYPE_BIND_HEAP_INFO_EXT");
    case 1000135004: return sv("VK_STRUCTURE_TYPE_PUSH_DATA_INFO_EXT");
    case 1000135005: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_AND_BINDING_MAPPING_EXT");
    case 1000135006: return sv("VK_STRUCTURE_TYPE_SHADER_DESCRIPTOR_SET_AND_BINDING_MAPPING_INFO_EXT");
    case 1000135007: return sv("VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DATA_CREATE_INFO_EXT");
    case 1000135008: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_PROPERTIES_EXT");
    case 1000135009: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_FEATURES_EXT");
    case 1000135010: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_DESCRIPTOR_HEAP_INFO_EXT");
    case 1000135011: return sv("VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_INDEX_CREATE_INFO_EXT");
    case 1000135012: return sv("VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_PUSH_DATA_TOKEN_NV");
    case 1000135013: return sv("VK_STRUCTURE_TYPE_SUBSAMPLED_IMAGE_FORMAT_PROPERTIES_EXT");
    case 1000135014: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_TENSOR_PROPERTIES_ARM");
    case 1000044008: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD");
    case 1000141000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR");
    case 1000143000: return sv("VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT");
    case 1000143001: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT");
    case 1000143002: return sv("VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT");
    case 1000143003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT");
    case 1000143004: return sv("VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT");
    case 1000148000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT");
    case 1000148001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT");
    case 1000148002: return sv("VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT");
    case 1000149000: return sv("VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV");
    case 1000150007: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR");
    case 1000150000: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR");
    case 1000150002: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR");
    case 1000150003: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR");
    case 1000150004: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR");
    case 1000150005: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR");
    case 1000150006: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR");
    case 1000150009: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR");
    case 1000150010: return sv("VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR");
    case 1000150011: return sv("VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR");
    case 1000150012: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR");
    case 1000150013: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR");
    case 1000150014: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR");
    case 1000150017: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR");
    case 1000150020: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR");
    case 1000347000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR");
    case 1000347001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR");
    case 1000150015: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR");
    case 1000150016: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR");
    case 1000150018: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR");
    case 1000348013: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR");
    case 1000152000: return sv("VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV");
    case 1000154000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV");
    case 1000154001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV");
    case 1000158000: return sv("VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT");
    case 1000158002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT");
    case 1000158003: return sv("VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT");
    case 1000158004: return sv("VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT");
    case 1000158005: return sv("VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT");
    case 1000158006: return sv("VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT");
    case 1000160000: return sv("VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT");
    case 1000160001: return sv("VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT");
    case 1000164000: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV");
    case 1000164001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV");
    case 1000164002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV");
    case 1000164005: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV");
    case 1000165000: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV");
    case 1000165001: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV");
    case 1000165003: return sv("VK_STRUCTURE_TYPE_GEOMETRY_NV");
    case 1000165004: return sv("VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV");
    case 1000165005: return sv("VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV");
    case 1000165006: return sv("VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV");
    case 1000165007: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV");
    case 1000165008: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV");
    case 1000165009: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV");
    case 1000165011: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV");
    case 1000165012: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV");
    case 1000166000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV");
    case 1000166001: return sv("VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV");
    case 1000170000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT");
    case 1000170001: return sv("VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT");
    case 1000178000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT");
    case 1000178001: return sv("VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT");
    case 1000178002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT");
    case 1000181000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR");
    case 1000183000: return sv("VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD");
    case 1000185000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD");
    case 1000187000: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR");
    case 1000187001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000187002: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR");
    case 1000187003: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR");
    case 1000187004: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR");
    case 1000187005: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR");
    case 1000189000: return sv("VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD");
    case 1000190000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT");
    case 1000191000: return sv("VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP");
    case 1000202000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV");
    case 1000202001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV");
    case 1000204000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV");
    case 1000205000: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV");
    case 1000205002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV");
    case 1000206000: return sv("VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV");
    case 1000206001: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV");
    case 1000314008: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV");
    case 1000314009: return sv("VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV");
    case 1000208000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_TIMING_FEATURES_EXT");
    case 1000208001: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_TIMING_PROPERTIES_EXT");
    case 1000208002: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_TIME_DOMAIN_PROPERTIES_EXT");
    case 1000208003: return sv("VK_STRUCTURE_TYPE_PRESENT_TIMINGS_INFO_EXT");
    case 1000208004: return sv("VK_STRUCTURE_TYPE_PRESENT_TIMING_INFO_EXT");
    case 1000208005: return sv("VK_STRUCTURE_TYPE_PAST_PRESENTATION_TIMING_INFO_EXT");
    case 1000208006: return sv("VK_STRUCTURE_TYPE_PAST_PRESENTATION_TIMING_PROPERTIES_EXT");
    case 1000208007: return sv("VK_STRUCTURE_TYPE_PAST_PRESENTATION_TIMING_EXT");
    case 1000208008: return sv("VK_STRUCTURE_TYPE_PRESENT_TIMING_SURFACE_CAPABILITIES_EXT");
    case 1000208009: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_CALIBRATED_TIMESTAMP_INFO_EXT");
    case 1000209000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL");
    case 1000210000: return sv("VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL");
    case 1000210001: return sv("VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL");
    case 1000210002: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL");
    case 1000210003: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL");
    case 1000210004: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL");
    case 1000210005: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL");
    case 1000212000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT");
    case 1000213000: return sv("VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD");
    case 1000213001: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD");
    case 1000214000: return sv("VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA");
    case 1000217000: return sv("VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT");
    case 1000218000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT");
    case 1000218001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT");
    case 1000218002: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT");
    case 1000044007: return sv("VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT");
    case 1000226000: return sv("VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR");
    case 1000226001: return sv("VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR");
    case 1000226002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR");
    case 1000226003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR");
    case 1000226004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR");
    case 1000044006: return sv("VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR");
    case 1000227000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD");
    case 1000229000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD");
    case 1000234000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT");
    case 1000235000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR");
    case 1000237000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT");
    case 1000238000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT");
    case 1000238001: return sv("VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT");
    case 1000239000: return sv("VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR");
    case 1000240000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV");
    case 1000244000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT");
    case 1000244002: return sv("VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT");
    case 1000247000: return sv("VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT");
    case 1000248000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR");
    case 1000249000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV");
    case 1000249001: return sv("VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV");
    case 1000249002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV");
    case 1000250000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV");
    case 1000250001: return sv("VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV");
    case 1000250002: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV");
    case 1000251000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT");
    case 1000252000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT");
    case 1000254000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT");
    case 1000254001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT");
    case 1000254002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT");
    case 1000255000: return sv("VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT");
    case 1000255002: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT");
    case 1000255001: return sv("VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT");
    case 1000256000: return sv("VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT");
    case 1000260000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT");
    case 1000267000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT");
    case 1000269000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR");
    case 1000269001: return sv("VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR");
    case 1000269002: return sv("VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR");
    case 1000269003: return sv("VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR");
    case 1000269004: return sv("VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR");
    case 1000269005: return sv("VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR");
    case 1000272000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT");
    case 1000272001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT");
    case 1000272002: return sv("VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT");
    case 1000273000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT");
    case 1000277000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV");
    case 1000277001: return sv("VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV");
    case 1000277002: return sv("VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV");
    case 1000277003: return sv("VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV");
    case 1000277004: return sv("VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV");
    case 1000277005: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV");
    case 1000277006: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV");
    case 1000277007: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV");
    case 1000278000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV");
    case 1000278001: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV");
    case 1000281000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT");
    case 1000282000: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM");
    case 1000282001: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM");
    case 1000283000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT");
    case 1000283001: return sv("VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT");
    case 1000283002: return sv("VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT");
    case 1000284000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT");
    case 1000284001: return sv("VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT");
    case 1000284002: return sv("VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT");
    case 1000287000: return sv("VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT");
    case 1000287001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT");
    case 1000287002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT");
    case 1000288000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_3D_FEATURES_EXT");
    case 1000290000: return sv("VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR");
    case 1000292000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV");
    case 1000292001: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV");
    case 1000292002: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV");
    case 1000294000: return sv("VK_STRUCTURE_TYPE_PRESENT_ID_KHR");
    case 1000294001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR");
    case 1000299000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR");
    case 1000299001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR");
    case 1000299002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR");
    case 1000299003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR");
    case 1000299004: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR");
    case 1000299005: return sv("VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR");
    case 1000299006: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR");
    case 1000299007: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR");
    case 1000299008: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR");
    case 1000299009: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR");
    case 1000299010: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR");
    case 1000300000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV");
    case 1000300001: return sv("VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV");
    case 1000309000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM");
    case 1000309001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_PROPERTIES_QCOM");
    case 1000309002: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_TILE_SHADING_CREATE_INFO_QCOM");
    case 1000309003: return sv("VK_STRUCTURE_TYPE_PER_TILE_BEGIN_INFO_QCOM");
    case 1000309004: return sv("VK_STRUCTURE_TYPE_PER_TILE_END_INFO_QCOM");
    case 1000309005: return sv("VK_STRUCTURE_TYPE_DISPATCH_TILE_INFO_QCOM");
    case 1000310000: return sv("VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV");
    case 1000311000: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT");
    case 1000311001: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT");
    case 1000311002: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT");
    case 1000311003: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT");
    case 1000311004: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT");
    case 1000311005: return sv("VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT");
    case 1000311006: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT");
    case 1000311007: return sv("VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT");
    case 1000311008: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT");
    case 1000311009: return sv("VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT");
    case 1000311010: return sv("VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT");
    case 1000311011: return sv("VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT");
    case 1000316000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT");
    case 1000316001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT");
    case 1000316002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT");
    case 1000316003: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT");
    case 1000316004: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT");
    case 1000316005: return sv("VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT");
    case 1000316006: return sv("VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT");
    case 1000316007: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT");
    case 1000316008: return sv("VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT");
    case 1000316010: return sv("VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT");
    case 1000316011: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT");
    case 1000316012: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT");
    case 1000316009: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT");
    case 1000320000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT");
    case 1000320001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT");
    case 1000320002: return sv("VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT");
    case 1000321000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD");
    case 1000203000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR");
    case 1000322000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR");
    case 1000323000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR");
    case 1000326000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV");
    case 1000326001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV");
    case 1000326002: return sv("VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV");
    case 1000327000: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV");
    case 1000327001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV");
    case 1000327002: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV");
    case 1000328000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT");
    case 1000328001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT");
    case 1000330000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT");
    case 1000332000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT");
    case 1000332001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT");
    case 1000333000: return sv("VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM");
    case 1000336000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR");
    case 1000338000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT");
    case 1000338001: return sv("VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT");
    case 1000338004: return sv("VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT");
    case 1000339000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT");
    case 1000340000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT");
    case 1000341000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT");
    case 1000341001: return sv("VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT");
    case 1000341002: return sv("VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT");
    case 1000344000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT");
    case 1000346000: return sv("VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT");
    case 1000352000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT");
    case 1000352001: return sv("VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT");
    case 1000352002: return sv("VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT");
    case 1000353000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT");
    case 1000354000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT");
    case 1000354001: return sv("VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT");
    case 1000355000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT");
    case 1000355001: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT");
    case 1000356000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT");
    case 1000364000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA");
    case 1000364001: return sv("VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA");
    case 1000364002: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA");
    case 1000365000: return sv("VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA");
    case 1000365001: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA");
    case 1000366000: return sv("VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CREATE_INFO_FUCHSIA");
    case 1000366001: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA");
    case 1000366002: return sv("VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA");
    case 1000366003: return sv("VK_STRUCTURE_TYPE_BUFFER_COLLECTION_PROPERTIES_FUCHSIA");
    case 1000366004: return sv("VK_STRUCTURE_TYPE_BUFFER_CONSTRAINTS_INFO_FUCHSIA");
    case 1000366005: return sv("VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA");
    case 1000366006: return sv("VK_STRUCTURE_TYPE_IMAGE_CONSTRAINTS_INFO_FUCHSIA");
    case 1000366007: return sv("VK_STRUCTURE_TYPE_IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA");
    case 1000366008: return sv("VK_STRUCTURE_TYPE_SYSMEM_COLOR_SPACE_FUCHSIA");
    case 1000366009: return sv("VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA");
    case 1000369000: return sv("VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI");
    case 1000369001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI");
    case 1000369002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI");
    case 1000370000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI");
    case 1000371000: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV");
    case 1000371001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV");
    case 1000372000: return sv("VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT");
    case 1000372001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT");
    case 1000375000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT");
    case 1000375001: return sv("VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT");
    case 1000376000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT");
    case 1000376001: return sv("VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT");
    case 1000376002: return sv("VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT");
    case 1000377000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT");
    case 1000378000: return sv("VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX");
    case 1000381000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT");
    case 1000381001: return sv("VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT");
    case 1000382000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT");
    case 1000386000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR");
    case 1000387000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR");
    case 1000390000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE");
    case 1000390001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_RGB_CONVERSION_CAPABILITIES_VALVE");
    case 1000390002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_PROFILE_RGB_CONVERSION_INFO_VALVE");
    case 1000390003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_RGB_CONVERSION_CREATE_INFO_VALVE");
    case 1000391000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT");
    case 1000391001: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT");
    case 1000392000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT");
    case 1000392001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT");
    case 1000393000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT");
    case 1000395000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT");
    case 1000395001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT");
    case 1000396000: return sv("VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT");
    case 1000396001: return sv("VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT");
    case 1000396002: return sv("VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT");
    case 1000396003: return sv("VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT");
    case 1000396004: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT");
    case 1000396005: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT");
    case 1000396006: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT");
    case 1000396007: return sv("VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT");
    case 1000396008: return sv("VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT");
    case 1000396009: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT");
    case 1000404000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI");
    case 1000404001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI");
    case 1000404002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI");
    case 1000411000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT");
    case 1000411001: return sv("VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT");
    case 1000412000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT");
    case 1000415000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM");
    case 1000417000: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM");
    case 1000417001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM");
    case 1000417002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM");
    case 1000418000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT");
    case 1000418001: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT");
    case 1000420000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE");
    case 1000420001: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE");
    case 1000420002: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE");
    case 1000422000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT");
    case 1000424000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM");
    case 1000424001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM");
    case 1000424002: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM");
    case 1000424003: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_INFO_ARM");
    case 1000424004: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM");
    case 1000426000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV");
    case 1000428000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV");
    case 1000428001: return sv("VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV");
    case 1000428002: return sv("VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV");
    case 1000429008: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV");
    case 1000429009: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_LINEAR_SWEPT_SPHERES_DATA_NV");
    case 1000429010: return sv("VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_SPHERES_DATA_NV");
    case 1000430000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV");
    case 1000434000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR");
    case 1000437000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT");
    case 1000440000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM");
    case 1000440001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM");
    case 1000440002: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM");
    case 1000451000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT");
    case 1000451001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT");
    case 1000452000: return sv("VK_STRUCTURE_TYPE_NATIVE_BUFFER_USAGE_OHOS");
    case 1000452001: return sv("VK_STRUCTURE_TYPE_NATIVE_BUFFER_PROPERTIES_OHOS");
    case 1000452002: return sv("VK_STRUCTURE_TYPE_NATIVE_BUFFER_FORMAT_PROPERTIES_OHOS");
    case 1000452003: return sv("VK_STRUCTURE_TYPE_IMPORT_NATIVE_BUFFER_INFO_OHOS");
    case 1000452004: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_NATIVE_BUFFER_INFO_OHOS");
    case 1000452005: return sv("VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_OHOS");
    case 1000453000: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT");
    case 1000455000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT");
    case 1000455001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT");
    case 1000458000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT");
    case 1000458001: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT");
    case 1000458002: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT");
    case 1000458003: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT");
    case 1000459000: return sv("VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG");
    case 1000459001: return sv("VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG");
    case 1000460000: return sv("VK_STRUCTURE_TYPE_TENSOR_CREATE_INFO_ARM");
    case 1000460001: return sv("VK_STRUCTURE_TYPE_TENSOR_VIEW_CREATE_INFO_ARM");
    case 1000460002: return sv("VK_STRUCTURE_TYPE_BIND_TENSOR_MEMORY_INFO_ARM");
    case 1000460003: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_TENSOR_ARM");
    case 1000460004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_PROPERTIES_ARM");
    case 1000460005: return sv("VK_STRUCTURE_TYPE_TENSOR_FORMAT_PROPERTIES_ARM");
    case 1000460006: return sv("VK_STRUCTURE_TYPE_TENSOR_DESCRIPTION_ARM");
    case 1000460007: return sv("VK_STRUCTURE_TYPE_TENSOR_MEMORY_REQUIREMENTS_INFO_ARM");
    case 1000460008: return sv("VK_STRUCTURE_TYPE_TENSOR_MEMORY_BARRIER_ARM");
    case 1000460009: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM");
    case 1000460010: return sv("VK_STRUCTURE_TYPE_DEVICE_TENSOR_MEMORY_REQUIREMENTS_ARM");
    case 1000460011: return sv("VK_STRUCTURE_TYPE_COPY_TENSOR_INFO_ARM");
    case 1000460012: return sv("VK_STRUCTURE_TYPE_TENSOR_COPY_ARM");
    case 1000460013: return sv("VK_STRUCTURE_TYPE_TENSOR_DEPENDENCY_INFO_ARM");
    case 1000460014: return sv("VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_TENSOR_ARM");
    case 1000460015: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_TENSOR_INFO_ARM");
    case 1000460016: return sv("VK_STRUCTURE_TYPE_EXTERNAL_TENSOR_PROPERTIES_ARM");
    case 1000460017: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_TENSOR_CREATE_INFO_ARM");
    case 1000460018: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM");
    case 1000460019: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_PROPERTIES_ARM");
    case 1000460020: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_GET_TENSOR_INFO_ARM");
    case 1000460021: return sv("VK_STRUCTURE_TYPE_TENSOR_CAPTURE_DESCRIPTOR_DATA_INFO_ARM");
    case 1000460022: return sv("VK_STRUCTURE_TYPE_TENSOR_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_ARM");
    case 1000460023: return sv("VK_STRUCTURE_TYPE_FRAME_BOUNDARY_TENSORS_ARM");
    case 1000462000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT");
    case 1000462001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT");
    case 1000462002: return sv("VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT");
    case 1000462003: return sv("VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT");
    case 1000342000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT");
    case 1000464000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV");
    case 1000464001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV");
    case 1000464002: return sv("VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV");
    case 1000464003: return sv("VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV");
    case 1000464004: return sv("VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV");
    case 1000464005: return sv("VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV");
    case 1000464010: return sv("VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV");
    case 1000465000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT");
    case 1000468000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID");
    case 1000468001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID");
    case 1000468002: return sv("VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID");
    case 1000476000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD");
    case 1000476001: return sv("VK_STRUCTURE_TYPE_ANTI_LAG_DATA_AMD");
    case 1000476002: return sv("VK_STRUCTURE_TYPE_ANTI_LAG_PRESENTATION_INFO_AMD");
    case 1000479000: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_ID_2_KHR");
    case 1000479001: return sv("VK_STRUCTURE_TYPE_PRESENT_ID_2_KHR");
    case 1000479002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR");
    case 1000480000: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_WAIT_2_KHR");
    case 1000480001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR");
    case 1000480002: return sv("VK_STRUCTURE_TYPE_PRESENT_WAIT_2_INFO_KHR");
    case 1000481000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR");
    case 1000482000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT");
    case 1000482001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT");
    case 1000482002: return sv("VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT");
    case 1000483000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR");
    case 1000483001: return sv("VK_STRUCTURE_TYPE_PIPELINE_BINARY_CREATE_INFO_KHR");
    case 1000483002: return sv("VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR");
    case 1000483003: return sv("VK_STRUCTURE_TYPE_PIPELINE_BINARY_KEY_KHR");
    case 1000483004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR");
    case 1000483005: return sv("VK_STRUCTURE_TYPE_RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR");
    case 1000483006: return sv("VK_STRUCTURE_TYPE_PIPELINE_BINARY_DATA_INFO_KHR");
    case 1000483007: return sv("VK_STRUCTURE_TYPE_PIPELINE_CREATE_INFO_KHR");
    case 1000483008: return sv("VK_STRUCTURE_TYPE_DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR");
    case 1000483009: return sv("VK_STRUCTURE_TYPE_PIPELINE_BINARY_HANDLES_INFO_KHR");
    case 1000484000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM");
    case 1000484001: return sv("VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM");
    case 1000485000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC");
    case 1000485001: return sv("VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC");
    case 1000274000: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_KHR");
    case 1000274001: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_KHR");
    case 1000274002: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_KHR");
    case 1000275000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR");
    case 1000275001: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_KHR");
    case 1000275002: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_KHR");
    case 1000275003: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_KHR");
    case 1000275004: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_KHR");
    case 1000275005: return sv("VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_KHR");
    case 1000488000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM");
    case 1000490000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV");
    case 1000490001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV");
    case 1000491000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV");
    case 1000491001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_PROPERTIES_NV");
    case 1000491002: return sv("VK_STRUCTURE_TYPE_COOPERATIVE_VECTOR_PROPERTIES_NV");
    case 1000491004: return sv("VK_STRUCTURE_TYPE_CONVERT_COOPERATIVE_VECTOR_MATRIX_INFO_NV");
    case 1000492000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV");
    case 1000492001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV");
    case 1000351000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT");
    case 1000351002: return sv("VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT");
    case 1000495000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT");
    case 1000495001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT");
    case 1000496000: return sv("VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT");
    case 1000497000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM");
    case 1000497001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM");
    case 1000498000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT");
    case 1000499000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT");
    case 1000504000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INTERNALLY_SYNCHRONIZED_QUEUES_FEATURES_KHR");
    case 1000505000: return sv("VK_STRUCTURE_TYPE_LATENCY_SLEEP_MODE_INFO_NV");
    case 1000505001: return sv("VK_STRUCTURE_TYPE_LATENCY_SLEEP_INFO_NV");
    case 1000505002: return sv("VK_STRUCTURE_TYPE_SET_LATENCY_MARKER_INFO_NV");
    case 1000505003: return sv("VK_STRUCTURE_TYPE_GET_LATENCY_MARKER_INFO_NV");
    case 1000505004: return sv("VK_STRUCTURE_TYPE_LATENCY_TIMINGS_FRAME_REPORT_NV");
    case 1000505005: return sv("VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV");
    case 1000505006: return sv("VK_STRUCTURE_TYPE_OUT_OF_BAND_QUEUE_TYPE_INFO_NV");
    case 1000505007: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV");
    case 1000505008: return sv("VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV");
    case 1000506000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR");
    case 1000506001: return sv("VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR");
    case 1000506002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR");
    case 1000507000: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_CREATE_INFO_ARM");
    case 1000507001: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SESSION_CREATE_INFO_ARM");
    case 1000507002: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_RESOURCE_INFO_ARM");
    case 1000507003: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_CONSTANT_ARM");
    case 1000507004: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SESSION_MEMORY_REQUIREMENTS_INFO_ARM");
    case 1000507005: return sv("VK_STRUCTURE_TYPE_BIND_DATA_GRAPH_PIPELINE_SESSION_MEMORY_INFO_ARM");
    case 1000507006: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM");
    case 1000507007: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SHADER_MODULE_CREATE_INFO_ARM");
    case 1000507008: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_PROPERTY_QUERY_RESULT_ARM");
    case 1000507009: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_INFO_ARM");
    case 1000507010: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_COMPILER_CONTROL_CREATE_INFO_ARM");
    case 1000507011: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_REQUIREMENTS_INFO_ARM");
    case 1000507012: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_REQUIREMENT_ARM");
    case 1000507013: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_IDENTIFIER_CREATE_INFO_ARM");
    case 1000507014: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_DISPATCH_INFO_ARM");
    case 1000507016: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PROCESSING_ENGINE_CREATE_INFO_ARM");
    case 1000507017: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_DATA_GRAPH_PROCESSING_ENGINE_PROPERTIES_ARM");
    case 1000507018: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_DATA_GRAPH_PROPERTIES_ARM");
    case 1000507019: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_QUEUE_FAMILY_DATA_GRAPH_PROCESSING_ENGINE_INFO_ARM");
    case 1000507015: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_CONSTANT_TENSOR_SEMI_STRUCTURED_SPARSITY_INFO_ARM");
    case 1000510000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM");
    case 1000510001: return sv("VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM");
    case 1000201000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR");
    case 1000511000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR");
    case 1000512000: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR");
    case 1000512001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR");
    case 1000512003: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR");
    case 1000512004: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000512005: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR");
    case 1000513000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_CAPABILITIES_KHR");
    case 1000513001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000513002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PICTURE_INFO_KHR");
    case 1000513003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR");
    case 1000513004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR");
    case 1000513005: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR");
    case 1000513006: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR");
    case 1000513007: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR");
    case 1000513008: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR");
    case 1000513009: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR");
    case 1000513010: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR");
    case 1000514000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR");
    case 1000514001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_CAPABILITIES_KHR");
    case 1000514002: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_PICTURE_INFO_KHR");
    case 1000514003: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_PROFILE_INFO_KHR");
    case 1000515000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR");
    case 1000515001: return sv("VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR");
    case 1000516000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV");
    case 1000518000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM");
    case 1000518001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM");
    case 1000518002: return sv("VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM");
    case 1000519000: return sv("VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM");
    case 1000519001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM");
    case 1000519002: return sv("VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM");
    case 1000520000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM");
    case 1000520001: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM");
    case 1000521000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM");
    case 1000524000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT");
    case 1000527000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR");
    case 1000527001: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_FEEDBACK_LOOP_INFO_EXT");
    case 1000529000: return sv("VK_STRUCTURE_TYPE_SCREEN_BUFFER_PROPERTIES_QNX");
    case 1000529001: return sv("VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX");
    case 1000529002: return sv("VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX");
    case 1000529003: return sv("VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX");
    case 1000529004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX");
    case 1000530000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT");
    case 1000184000: return sv("VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_KHR");
    case 1000545007: return sv("VK_STRUCTURE_TYPE_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT");
    case 1000545008: return sv("VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT");
    case 1000546000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV");
    case 1000547000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM");
    case 1000547001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_PROPERTIES_QCOM");
    case 1000547002: return sv("VK_STRUCTURE_TYPE_TILE_MEMORY_REQUIREMENTS_QCOM");
    case 1000547003: return sv("VK_STRUCTURE_TYPE_TILE_MEMORY_BIND_INFO_QCOM");
    case 1000547004: return sv("VK_STRUCTURE_TYPE_TILE_MEMORY_SIZE_INFO_QCOM");
    case 1000549000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR");
    case 1000426001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_KHR");
    case 1000549002: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_INDIRECT_INFO_KHR");
    case 1000549003: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INDIRECT_INFO_KHR");
    case 1000427000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT");
    case 1000427001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_EXT");
    case 1000550002: return sv("VK_STRUCTURE_TYPE_DECOMPRESS_MEMORY_INFO_EXT");
    case 1000551000: return sv("VK_STRUCTURE_TYPE_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV");
    case 1000551001: return sv("VK_STRUCTURE_TYPE_DISPLAY_MODE_STEREO_PROPERTIES_NV");
    case 1000552000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_INTRA_REFRESH_CAPABILITIES_KHR");
    case 1000552001: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_INTRA_REFRESH_CREATE_INFO_KHR");
    case 1000552002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_INTRA_REFRESH_INFO_KHR");
    case 1000552003: return sv("VK_STRUCTURE_TYPE_VIDEO_REFERENCE_INTRA_REFRESH_INFO_KHR");
    case 1000552004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR");
    case 1000553000: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR");
    case 1000553001: return sv("VK_STRUCTURE_TYPE_VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR");
    case 1000553002: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR");
    case 1000553005: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR");
    case 1000553009: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR");
    case 1000553003: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR");
    case 1000553004: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR");
    case 1000553006: return sv("VK_STRUCTURE_TYPE_VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR");
    case 1000553007: return sv("VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR");
    case 1000553008: return sv("VK_STRUCTURE_TYPE_VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR");
    case 1000555000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV");
    case 1000556000: return sv("VK_STRUCTURE_TYPE_EXTERNAL_COMPUTE_QUEUE_DEVICE_CREATE_INFO_NV");
    case 1000556001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_COMPUTE_QUEUE_CREATE_INFO_NV");
    case 1000556002: return sv("VK_STRUCTURE_TYPE_EXTERNAL_COMPUTE_QUEUE_DATA_PARAMS_NV");
    case 1000556003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_COMPUTE_QUEUE_PROPERTIES_NV");
    case 1000558000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR");
    case 1000559000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV");
    case 1000562000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR");
    case 1000562001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR");
    case 1000562002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR");
    case 1000562003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR");
    case 1000562004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR");
    case 1000563000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV");
    case 1000564000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT");
    case 1000567000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT");
    case 1000568000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV");
    case 1000569000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV");
    case 1000569001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_PROPERTIES_NV");
    case 1000569002: return sv("VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_CLUSTERS_BOTTOM_LEVEL_INPUT_NV");
    case 1000569003: return sv("VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_TRIANGLE_CLUSTER_INPUT_NV");
    case 1000569004: return sv("VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_MOVE_OBJECTS_INPUT_NV");
    case 1000569005: return sv("VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_INPUT_INFO_NV");
    case 1000569006: return sv("VK_STRUCTURE_TYPE_CLUSTER_ACCELERATION_STRUCTURE_COMMANDS_INFO_NV");
    case 1000569007: return sv("VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CLUSTER_ACCELERATION_STRUCTURE_CREATE_INFO_NV");
    case 1000570000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV");
    case 1000570001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_PROPERTIES_NV");
    case 1000570002: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_PARTITIONED_ACCELERATION_STRUCTURE_NV");
    case 1000570003: return sv("VK_STRUCTURE_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCES_INPUT_NV");
    case 1000570004: return sv("VK_STRUCTURE_TYPE_BUILD_PARTITIONED_ACCELERATION_STRUCTURE_INFO_NV");
    case 1000570005: return sv("VK_STRUCTURE_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_FLAGS_NV");
    case 1000572000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT");
    case 1000572001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT");
    case 1000572002: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT");
    case 1000572003: return sv("VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_CREATE_INFO_EXT");
    case 1000572004: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_EXT");
    case 1000572006: return sv("VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT");
    case 1000572007: return sv("VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT");
    case 1000572008: return sv("VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT");
    case 1000572009: return sv("VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT");
    case 1000572010: return sv("VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT");
    case 1000572011: return sv("VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_INFO_EXT");
    case 1000572012: return sv("VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT");
    case 1000572013: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_PIPELINE_INFO_EXT");
    case 1000572014: return sv("VK_STRUCTURE_TYPE_GENERATED_COMMANDS_SHADER_INFO_EXT");
    case 1000574000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR");
    case 1000574002: return sv("VK_STRUCTURE_TYPE_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR");
    case 1000575000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA");
    case 1000575001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA");
    case 1000575002: return sv("VK_STRUCTURE_TYPE_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA");
    case 1000579000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR");
    case 1000580000: return sv("VK_STRUCTURE_TYPE_PUSH_CONSTANT_BANK_INFO_NV");
    case 1000580001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_FEATURES_NV");
    case 1000580002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_PROPERTIES_NV");
    case 1000581000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_EXT");
    case 1000581001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_EXT");
    case 1000582000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT");
    case 1000582001: return sv("VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT");
    case 1000584000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR");
    case 1000584001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_PROPERTIES_KHR");
    case 1000584002: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_OWNERSHIP_TRANSFER_PROPERTIES_KHR");
    case 1000586000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR");
    case 1000586001: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_INLINE_SESSION_PARAMETERS_INFO_KHR");
    case 1000586002: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_INLINE_SESSION_PARAMETERS_INFO_KHR");
    case 1000586003: return sv("VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_INLINE_SESSION_PARAMETERS_INFO_KHR");
    case 1000685000: return sv("VK_STRUCTURE_TYPE_SURFACE_CREATE_INFO_OHOS");
    case 1000590000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI");
    case 1000590001: return sv("VK_STRUCTURE_TYPE_HDR_VIVID_DYNAMIC_METADATA_HUAWEI");
    case 1000593000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV");
    case 1000593001: return sv("VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV");
    case 1000593002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV");
    case 1000596000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM");
    case 1000602000: return sv("VK_STRUCTURE_TYPE_IMPORT_MEMORY_METAL_HANDLE_INFO_EXT");
    case 1000602001: return sv("VK_STRUCTURE_TYPE_MEMORY_METAL_HANDLE_PROPERTIES_EXT");
    case 1000602002: return sv("VK_STRUCTURE_TYPE_MEMORY_GET_METAL_HANDLE_INFO_EXT");
    case 1000421000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR");
    case 1000605000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_FEATURES_ARM");
    case 1000605001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_PROPERTIES_ARM");
    case 1000605002: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_ARM");
    case 1000605003: return sv("VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_ARM");
    case 1000605004: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_PERFORMANCE_COUNTERS_BY_REGION_BEGIN_INFO_ARM");
    case 1000608000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT");
    case 1000609000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM");
    case 1000611000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE");
    case 1000611001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_PROPERTIES_VALVE");
    case 1000611002: return sv("VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_DENSITY_MAP_LAYERED_CREATE_INFO_VALVE");
    case 1000286000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR");
    case 1000286001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_KHR");
    case 1000425000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT");
    case 1000425001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_EXT");
    case 1000425002: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_EXT");
    case 1000620000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT");
    case 1000361000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR");
    case 1000627000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT");
    case 1000628000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_RESOLVE_FEATURES_EXT");
    case 1000628001: return sv("VK_STRUCTURE_TYPE_BEGIN_CUSTOM_RESOLVE_INFO_EXT");
    case 1000628002: return sv("VK_STRUCTURE_TYPE_CUSTOM_RESOLVE_CREATE_INFO_EXT");
    case 1000629000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_MODEL_FEATURES_QCOM");
    case 1000629001: return sv("VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_BUILTIN_MODEL_CREATE_INFO_QCOM");
    case 1000630000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR");
    case 1000630001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_PROPERTIES_KHR");
    case 1000630002: return sv("VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_FLAGS_INFO_KHR");
    case 1000619003: return sv("VK_STRUCTURE_TYPE_RENDERING_END_INFO_KHR");
    case 1000630004: return sv("VK_STRUCTURE_TYPE_RESOLVE_IMAGE_MODE_INFO_KHR");
    case 1000635000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_FEATURES_EXT");
    case 1000635001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_PROPERTIES_EXT");
    case 1000637000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC");
    case 1000642000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT");
    case 1000645000: return sv("VK_STRUCTURE_TYPE_COMPUTE_OCCUPANCY_PRIORITY_PARAMETERS_NV");
    case 1000645001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_OCCUPANCY_PRIORITY_FEATURES_NV");
    case 1000662000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_PARTITIONED_FEATURES_EXT");
    // case 1000120000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES"); // duplicate value
    // case 1000063000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES"); // duplicate value
    // case 1000011000: return sv("VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT"); // duplicate value
    // case 1000044000: return sv("VK_STRUCTURE_TYPE_RENDERING_INFO_KHR"); // duplicate value
    // case 1000044001: return sv("VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO_KHR"); // duplicate value
    // case 1000044002: return sv("VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO_KHR"); // duplicate value
    // case 1000044003: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR"); // duplicate value
    // case 1000044004: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO_KHR"); // duplicate value
    // case 1000053000: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR"); // duplicate value
    // case 1000053001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR"); // duplicate value
    // case 1000053002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR"); // duplicate value
    // case 1000059000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR"); // duplicate value
    // case 1000059001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059002: return sv("VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059003: return sv("VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR"); // duplicate value
    // case 1000059005: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059006: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059007: return sv("VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR"); // duplicate value
    // case 1000059008: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR"); // duplicate value
    // case 1000060000: return sv("VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR"); // duplicate value
    // case 1000060003: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR"); // duplicate value
    // case 1000060004: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR"); // duplicate value
    // case 1000060005: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR"); // duplicate value
    // case 1000060006: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR"); // duplicate value
    // case 1000060013: return sv("VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR"); // duplicate value
    // case 1000060014: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR"); // duplicate value
    // case 1000066000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT"); // duplicate value
    // case 1000068000: return sv("VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT"); // duplicate value
    // case 1000068001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT"); // duplicate value
    // case 1000068002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT"); // duplicate value
    // case 1000070000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR"); // duplicate value
    // case 1000070001: return sv("VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR"); // duplicate value
    // case 1000071000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR"); // duplicate value
    // case 1000071001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR"); // duplicate value
    // case 1000071002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR"); // duplicate value
    // case 1000071003: return sv("VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR"); // duplicate value
    // case 1000071004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR"); // duplicate value
    // case 1000072000: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR"); // duplicate value
    // case 1000072001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR"); // duplicate value
    // case 1000072002: return sv("VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR"); // duplicate value
    // case 1000076000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR"); // duplicate value
    // case 1000076001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR"); // duplicate value
    // case 1000077000: return sv("VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR"); // duplicate value
    // case 1000080000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR"); // duplicate value
    // case 1000082000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR"); // duplicate value
    // case 1000082000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR"); // duplicate value
    // case 1000083000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR"); // duplicate value
    // case 1000085000: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR"); // duplicate value
    // case 1000090000: return sv("VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT"); // duplicate value
    // case 1000108000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR"); // duplicate value
    // case 1000108001: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR"); // duplicate value
    // case 1000108002: return sv("VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR"); // duplicate value
    // case 1000108003: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR"); // duplicate value
    // case 1000109000: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR"); // duplicate value
    // case 1000109001: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR"); // duplicate value
    // case 1000109002: return sv("VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR"); // duplicate value
    // case 1000109003: return sv("VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR"); // duplicate value
    // case 1000109004: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR"); // duplicate value
    // case 1000109005: return sv("VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR"); // duplicate value
    // case 1000109006: return sv("VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR"); // duplicate value
    // case 1000112000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR"); // duplicate value
    // case 1000112001: return sv("VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR"); // duplicate value
    // case 1000113000: return sv("VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR"); // duplicate value
    // case 1000117000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR"); // duplicate value
    // case 1000117001: return sv("VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR"); // duplicate value
    // case 1000117002: return sv("VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR"); // duplicate value
    // case 1000117003: return sv("VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR"); // duplicate value
    // case 1000120000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR"); // duplicate value
    // case 1000120000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR"); // duplicate value
    // case 1000127000: return sv("VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR"); // duplicate value
    // case 1000127001: return sv("VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR"); // duplicate value
    // case 1000130000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT"); // duplicate value
    // case 1000130001: return sv("VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT"); // duplicate value
    // case 1000138000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT"); // duplicate value
    // case 1000138001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT"); // duplicate value
    // case 1000138002: return sv("VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT"); // duplicate value
    // case 1000138003: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT"); // duplicate value
    // case 1000146000: return sv("VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR"); // duplicate value
    // case 1000146001: return sv("VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR"); // duplicate value
    // case 1000146002: return sv("VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR"); // duplicate value
    // case 1000146003: return sv("VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR"); // duplicate value
    // case 1000146004: return sv("VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR"); // duplicate value
    // case 1000147000: return sv("VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR"); // duplicate value
    // case 1000044008: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_NV"); // duplicate value
    // case 1000156000: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR"); // duplicate value
    // case 1000156001: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR"); // duplicate value
    // case 1000156002: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR"); // duplicate value
    // case 1000156003: return sv("VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR"); // duplicate value
    // case 1000156004: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR"); // duplicate value
    // case 1000156005: return sv("VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR"); // duplicate value
    // case 1000157000: return sv("VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR"); // duplicate value
    // case 1000157001: return sv("VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR"); // duplicate value
    // case 1000161000: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT"); // duplicate value
    // case 1000161001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT"); // duplicate value
    // case 1000161002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT"); // duplicate value
    // case 1000161003: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT"); // duplicate value
    // case 1000161004: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT"); // duplicate value
    // case 1000168000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR"); // duplicate value
    // case 1000168001: return sv("VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR"); // duplicate value
    // case 1000174000: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT"); // duplicate value
    // case 1000175000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR"); // duplicate value
    // case 1000177000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR"); // duplicate value
    // case 1000180000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR"); // duplicate value
    // case 1000184000: return sv("VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT"); // duplicate value
    // case 1000174000: return sv("VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR"); // duplicate value
    // case 1000388000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR"); // duplicate value
    // case 1000388001: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR"); // duplicate value
    // case 1000190001: return sv("VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT"); // duplicate value
    // case 1000190002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT"); // duplicate value
    // case 1000192000: return sv("VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT"); // duplicate value
    // case 1000196000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR"); // duplicate value
    // case 1000197000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR"); // duplicate value
    // case 1000199000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR"); // duplicate value
    // case 1000199001: return sv("VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR"); // duplicate value
    // case 1000201000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV"); // duplicate value
    // case 1000203000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV"); // duplicate value
    // case 1000207000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR"); // duplicate value
    // case 1000207001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR"); // duplicate value
    // case 1000207002: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR"); // duplicate value
    // case 1000207003: return sv("VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR"); // duplicate value
    // case 1000207004: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR"); // duplicate value
    // case 1000207005: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR"); // duplicate value
    // case 1000210000: return sv("VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL"); // duplicate value
    // case 1000211000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR"); // duplicate value
    // case 1000215000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR"); // duplicate value
    // case 1000221000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT"); // duplicate value
    // case 1000225000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT"); // duplicate value
    // case 1000225001: return sv("VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT"); // duplicate value
    // case 1000225002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT"); // duplicate value
    // case 1000232000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR"); // duplicate value
    // case 1000232001: return sv("VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO_KHR"); // duplicate value
    // case 1000232002: return sv("VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR"); // duplicate value
    // case 1000241000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR"); // duplicate value
    // case 1000241001: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR"); // duplicate value
    // case 1000241002: return sv("VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR"); // duplicate value
    // case 1000244000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT"); // duplicate value
    // case 1000244001: return sv("VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT"); // duplicate value
    // case 1000245000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT"); // duplicate value
    // case 1000246000: return sv("VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT"); // duplicate value
    // case 1000253000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR"); // duplicate value
    // case 1000257000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_KHR"); // duplicate value
    // case 1000244001: return sv("VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_KHR"); // duplicate value
    // case 1000257002: return sv("VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO_KHR"); // duplicate value
    // case 1000257003: return sv("VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO_KHR"); // duplicate value
    // case 1000257004: return sv("VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO_KHR"); // duplicate value
    // case 1000259000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT"); // duplicate value
    // case 1000259001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT"); // duplicate value
    // case 1000259002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT"); // duplicate value
    // case 1000261000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT"); // duplicate value
    // case 1000265000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT"); // duplicate value
    // case 1000270000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT"); // duplicate value
    // case 1000270001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT"); // duplicate value
    // case 1000270002: return sv("VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT"); // duplicate value
    // case 1000270003: return sv("VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT"); // duplicate value
    // case 1000270004: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT"); // duplicate value
    // case 1000270005: return sv("VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT"); // duplicate value
    // case 1000270006: return sv("VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT"); // duplicate value
    // case 1000270007: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT"); // duplicate value
    // case 1000270008: return sv("VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT"); // duplicate value
    // case 1000270009: return sv("VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT"); // duplicate value
    // case 1000271000: return sv("VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR"); // duplicate value
    // case 1000271001: return sv("VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR"); // duplicate value
    // case 1000274000: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT"); // duplicate value
    // case 1000274001: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT"); // duplicate value
    // case 1000274002: return sv("VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT"); // duplicate value
    // case 1000275000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT"); // duplicate value
    // case 1000275001: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT"); // duplicate value
    // case 1000275002: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT"); // duplicate value
    // case 1000275003: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT"); // duplicate value
    // case 1000275004: return sv("VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT"); // duplicate value
    // case 1000275005: return sv("VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT"); // duplicate value
    // case 1000276000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT"); // duplicate value
    // case 1000280000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR"); // duplicate value
    // case 1000280001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR"); // duplicate value
    // case 1000281001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT"); // duplicate value
    // case 1000286000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT"); // duplicate value
    // case 1000286001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT"); // duplicate value
    // case 1000295000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT"); // duplicate value
    // case 1000295001: return sv("VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT"); // duplicate value
    // case 1000295002: return sv("VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT"); // duplicate value
    // case 1000297000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT"); // duplicate value
    // case 1000314000: return sv("VK_STRUCTURE_TYPE_MEMORY_BARRIER_2_KHR"); // duplicate value
    // case 1000314001: return sv("VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2_KHR"); // duplicate value
    // case 1000314002: return sv("VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2_KHR"); // duplicate value
    // case 1000314003: return sv("VK_STRUCTURE_TYPE_DEPENDENCY_INFO_KHR"); // duplicate value
    // case 1000314004: return sv("VK_STRUCTURE_TYPE_SUBMIT_INFO_2_KHR"); // duplicate value
    // case 1000314005: return sv("VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO_KHR"); // duplicate value
    // case 1000314006: return sv("VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO_KHR"); // duplicate value
    // case 1000314007: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR"); // duplicate value
    // case 1000325000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR"); // duplicate value
    // case 1000335000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT"); // duplicate value
    // case 1000337000: return sv("VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2_KHR"); // duplicate value
    // case 1000337001: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2_KHR"); // duplicate value
    // case 1000337002: return sv("VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2_KHR"); // duplicate value
    // case 1000337003: return sv("VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2_KHR"); // duplicate value
    // case 1000337004: return sv("VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2_KHR"); // duplicate value
    // case 1000337005: return sv("VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2_KHR"); // duplicate value
    // case 1000337006: return sv("VK_STRUCTURE_TYPE_BUFFER_COPY_2_KHR"); // duplicate value
    // case 1000337007: return sv("VK_STRUCTURE_TYPE_IMAGE_COPY_2_KHR"); // duplicate value
    // case 1000337008: return sv("VK_STRUCTURE_TYPE_IMAGE_BLIT_2_KHR"); // duplicate value
    // case 1000337009: return sv("VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2_KHR"); // duplicate value
    // case 1000337010: return sv("VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2_KHR"); // duplicate value
    // case 1000338002: return sv("VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_EXT"); // duplicate value
    // case 1000338003: return sv("VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_EXT"); // duplicate value
    // case 1000342000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_ARM"); // duplicate value
    // case 1000351000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_VALVE"); // duplicate value
    // case 1000351002: return sv("VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE"); // duplicate value
    // case 1000360000: return sv("VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR"); // duplicate value
    // case 1000361000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT"); // duplicate value
    // case 1000269001: return sv("VK_STRUCTURE_TYPE_PIPELINE_INFO_EXT"); // duplicate value
    // case 1000388000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT"); // duplicate value
    // case 1000388001: return sv("VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT"); // duplicate value
    // case 1000413000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR"); // duplicate value
    // case 1000413001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR"); // duplicate value
    // case 1000413002: return sv("VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS_KHR"); // duplicate value
    // case 1000413003: return sv("VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS_KHR"); // duplicate value
    // case 1000416000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR"); // duplicate value
    // case 1000421000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT"); // duplicate value
    // case 1000425000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM"); // duplicate value
    // case 1000425001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM"); // duplicate value
    // case 1000425002: return sv("VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM"); // duplicate value
    // case 1000426001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV"); // duplicate value
    // case 1000427000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV"); // duplicate value
    // case 1000427001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV"); // duplicate value
    // case 1000466000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT"); // duplicate value
    // case 1000470000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR"); // duplicate value
    // case 1000470001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR"); // duplicate value
    // case 1000470003: return sv("VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR"); // duplicate value
    // case 1000470004: return sv("VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR"); // duplicate value
    // case 1000338002: return sv("VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR"); // duplicate value
    // case 1000338003: return sv("VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR"); // duplicate value
    // case 1000470005: return sv("VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR"); // duplicate value
    // case 1000470006: return sv("VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR"); // duplicate value
    // case 1000225001: return sv("VK_STRUCTURE_TYPE_SHADER_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT"); // duplicate value
    // case 1000525000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR"); // duplicate value
    // case 1000190001: return sv("VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR"); // duplicate value
    // case 1000190002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR"); // duplicate value
    // case 1000528000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR"); // duplicate value
    // case 1000265000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR"); // duplicate value
    // case 1000259000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR"); // duplicate value
    // case 1000259001: return sv("VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR"); // duplicate value
    // case 1000259002: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR"); // duplicate value
    // case 1000544000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR"); // duplicate value
    // case 1000545000: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR"); // duplicate value
    // case 1000545001: return sv("VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR"); // duplicate value
    // case 1000545002: return sv("VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS_KHR"); // duplicate value
    // case 1000545003: return sv("VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO_KHR"); // duplicate value
    // case 1000545004: return sv("VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO_KHR"); // duplicate value
    // case 1000545005: return sv("VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO_KHR"); // duplicate value
    // case 1000545006: return sv("VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR"); // duplicate value
    // case 1000619003: return sv("VK_STRUCTURE_TYPE_RENDERING_END_INFO_EXT"); // duplicate value
    case 2147483647: return sv("VK_STRUCTURE_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkStencilOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_STENCIL_OP_KEEP");
    case 1: return sv("VK_STENCIL_OP_ZERO");
    case 2: return sv("VK_STENCIL_OP_REPLACE");
    case 3: return sv("VK_STENCIL_OP_INCREMENT_AND_CLAMP");
    case 4: return sv("VK_STENCIL_OP_DECREMENT_AND_CLAMP");
    case 5: return sv("VK_STENCIL_OP_INVERT");
    case 6: return sv("VK_STENCIL_OP_INCREMENT_AND_WRAP");
    case 7: return sv("VK_STENCIL_OP_DECREMENT_AND_WRAP");
    case 2147483647: return sv("VK_STENCIL_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkStencilFaceFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_STENCIL_FACE_FRONT_BIT");
    case 2: return sv("VK_STENCIL_FACE_BACK_BIT");
    case 3: return sv("VK_STENCIL_FACE_FRONT_AND_BACK");
    // case 3: return sv("VK_STENCIL_FRONT_AND_BACK"); // duplicate value
    case 2147483647: return sv("VK_STENCIL_FACE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSpirvResourceTypeFlagBitsEXT(int64_t value) {
    switch (value) {
    case 2147483647: return sv("VK_SPIRV_RESOURCE_TYPE_ALL_EXT");
    case 1: return sv("VK_SPIRV_RESOURCE_TYPE_SAMPLER_BIT_EXT");
    case 2: return sv("VK_SPIRV_RESOURCE_TYPE_SAMPLED_IMAGE_BIT_EXT");
    case 4: return sv("VK_SPIRV_RESOURCE_TYPE_READ_ONLY_IMAGE_BIT_EXT");
    case 8: return sv("VK_SPIRV_RESOURCE_TYPE_READ_WRITE_IMAGE_BIT_EXT");
    case 16: return sv("VK_SPIRV_RESOURCE_TYPE_COMBINED_SAMPLED_IMAGE_BIT_EXT");
    case 32: return sv("VK_SPIRV_RESOURCE_TYPE_UNIFORM_BUFFER_BIT_EXT");
    case 64: return sv("VK_SPIRV_RESOURCE_TYPE_READ_ONLY_STORAGE_BUFFER_BIT_EXT");
    case 128: return sv("VK_SPIRV_RESOURCE_TYPE_READ_WRITE_STORAGE_BUFFER_BIT_EXT");
    case 256: return sv("VK_SPIRV_RESOURCE_TYPE_ACCELERATION_STRUCTURE_BIT_EXT");
    case 512: return sv("VK_SPIRV_RESOURCE_TYPE_TENSOR_BIT_ARM");
    // case 2147483647: return sv("VK_SPIRV_RESOURCE_TYPE_FLAG_BITS_MAX_ENUM_EXT"); // duplicate value
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSparseMemoryBindFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SPARSE_MEMORY_BIND_METADATA_BIT");
    case 2147483647: return sv("VK_SPARSE_MEMORY_BIND_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSparseImageFormatFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT");
    case 2: return sv("VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT");
    case 4: return sv("VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT");
    case 2147483647: return sv("VK_SPARSE_IMAGE_FORMAT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSharingMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHARING_MODE_EXCLUSIVE");
    case 1: return sv("VK_SHARING_MODE_CONCURRENT");
    case 2147483647: return sv("VK_SHARING_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShadingRatePaletteEntryNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV");
    case 1: return sv("VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV");
    case 2: return sv("VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV");
    case 3: return sv("VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV");
    case 4: return sv("VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV");
    case 5: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV");
    case 6: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV");
    case 7: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV");
    case 8: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV");
    case 9: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV");
    case 10: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV");
    case 11: return sv("VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV");
    case 2147483647: return sv("VK_SHADING_RATE_PALETTE_ENTRY_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderStageFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SHADER_STAGE_VERTEX_BIT");
    case 2: return sv("VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT");
    case 4: return sv("VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT");
    case 8: return sv("VK_SHADER_STAGE_GEOMETRY_BIT");
    case 16: return sv("VK_SHADER_STAGE_FRAGMENT_BIT");
    case 32: return sv("VK_SHADER_STAGE_COMPUTE_BIT");
    case 31: return sv("VK_SHADER_STAGE_ALL_GRAPHICS");
    case 2147483647: return sv("VK_SHADER_STAGE_ALL");
    case 256: return sv("VK_SHADER_STAGE_RAYGEN_BIT_KHR");
    case 512: return sv("VK_SHADER_STAGE_ANY_HIT_BIT_KHR");
    case 1024: return sv("VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR");
    case 2048: return sv("VK_SHADER_STAGE_MISS_BIT_KHR");
    case 4096: return sv("VK_SHADER_STAGE_INTERSECTION_BIT_KHR");
    case 8192: return sv("VK_SHADER_STAGE_CALLABLE_BIT_KHR");
    case 64: return sv("VK_SHADER_STAGE_TASK_BIT_EXT");
    case 128: return sv("VK_SHADER_STAGE_MESH_BIT_EXT");
    case 16384: return sv("VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI");
    case 524288: return sv("VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI");
    // case 256: return sv("VK_SHADER_STAGE_RAYGEN_BIT_NV"); // duplicate value
    // case 512: return sv("VK_SHADER_STAGE_ANY_HIT_BIT_NV"); // duplicate value
    // case 1024: return sv("VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV"); // duplicate value
    // case 2048: return sv("VK_SHADER_STAGE_MISS_BIT_NV"); // duplicate value
    // case 4096: return sv("VK_SHADER_STAGE_INTERSECTION_BIT_NV"); // duplicate value
    // case 8192: return sv("VK_SHADER_STAGE_CALLABLE_BIT_NV"); // duplicate value
    // case 64: return sv("VK_SHADER_STAGE_TASK_BIT_NV"); // duplicate value
    // case 128: return sv("VK_SHADER_STAGE_MESH_BIT_NV"); // duplicate value
    // case 2147483647: return sv("VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM"); // duplicate value
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderInfoTypeAMD(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHADER_INFO_TYPE_STATISTICS_AMD");
    case 1: return sv("VK_SHADER_INFO_TYPE_BINARY_AMD");
    case 2: return sv("VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD");
    case 2147483647: return sv("VK_SHADER_INFO_TYPE_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderGroupShaderKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHADER_GROUP_SHADER_GENERAL_KHR");
    case 1: return sv("VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR");
    case 2: return sv("VK_SHADER_GROUP_SHADER_ANY_HIT_KHR");
    case 3: return sv("VK_SHADER_GROUP_SHADER_INTERSECTION_KHR");
    case 2147483647: return sv("VK_SHADER_GROUP_SHADER_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderFloatControlsIndependence(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY");
    case 1: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL");
    case 2: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE");
    // case 0: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR"); // duplicate value
    // case 1: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR"); // duplicate value
    // case 2: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR"); // duplicate value
    case 2147483647: return sv("VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderCreateFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SHADER_CREATE_LINK_STAGE_BIT_EXT");
    case 1024: return sv("VK_SHADER_CREATE_DESCRIPTOR_HEAP_BIT_EXT");
    case 2: return sv("VK_SHADER_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT");
    case 4: return sv("VK_SHADER_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT");
    case 8: return sv("VK_SHADER_CREATE_NO_TASK_SHADER_BIT_EXT");
    case 16: return sv("VK_SHADER_CREATE_DISPATCH_BASE_BIT_EXT");
    case 32: return sv("VK_SHADER_CREATE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_EXT");
    case 64: return sv("VK_SHADER_CREATE_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT");
    case 128: return sv("VK_SHADER_CREATE_INDIRECT_BINDABLE_BIT_EXT");
    case 32768: return sv("VK_SHADER_CREATE_64_BIT_INDEXING_BIT_EXT");
    case 2147483647: return sv("VK_SHADER_CREATE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderCorePropertiesFlagBitsAMD(int64_t value) {
    switch (value) {
    case 2147483647: return sv("VK_SHADER_CORE_PROPERTIES_FLAG_BITS_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkShaderCodeTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SHADER_CODE_TYPE_BINARY_EXT");
    case 1: return sv("VK_SHADER_CODE_TYPE_SPIRV_EXT");
    case 2147483647: return sv("VK_SHADER_CODE_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSemaphoreWaitFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SEMAPHORE_WAIT_ANY_BIT");
    // case 1: return sv("VK_SEMAPHORE_WAIT_ANY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_SEMAPHORE_WAIT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSemaphoreType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SEMAPHORE_TYPE_BINARY");
    case 1: return sv("VK_SEMAPHORE_TYPE_TIMELINE");
    // case 0: return sv("VK_SEMAPHORE_TYPE_BINARY_KHR"); // duplicate value
    // case 1: return sv("VK_SEMAPHORE_TYPE_TIMELINE_KHR"); // duplicate value
    case 2147483647: return sv("VK_SEMAPHORE_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSemaphoreImportFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SEMAPHORE_IMPORT_TEMPORARY_BIT");
    // case 1: return sv("VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_SEMAPHORE_IMPORT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkScopeKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SCOPE_DEVICE_KHR");
    case 2: return sv("VK_SCOPE_WORKGROUP_KHR");
    case 3: return sv("VK_SCOPE_SUBGROUP_KHR");
    case 5: return sv("VK_SCOPE_QUEUE_FAMILY_KHR");
    // case 1: return sv("VK_SCOPE_DEVICE_NV"); // duplicate value
    // case 2: return sv("VK_SCOPE_WORKGROUP_NV"); // duplicate value
    // case 3: return sv("VK_SCOPE_SUBGROUP_NV"); // duplicate value
    // case 5: return sv("VK_SCOPE_QUEUE_FAMILY_NV"); // duplicate value
    case 2147483647: return sv("VK_SCOPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerYcbcrRange(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SAMPLER_YCBCR_RANGE_ITU_FULL");
    case 1: return sv("VK_SAMPLER_YCBCR_RANGE_ITU_NARROW");
    // case 0: return sv("VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR"); // duplicate value
    // case 1: return sv("VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR"); // duplicate value
    case 2147483647: return sv("VK_SAMPLER_YCBCR_RANGE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerYcbcrModelConversion(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY");
    case 1: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY");
    case 2: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709");
    case 3: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601");
    case 4: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020");
    // case 0: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR"); // duplicate value
    // case 1: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR"); // duplicate value
    // case 2: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR"); // duplicate value
    // case 3: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR"); // duplicate value
    // case 4: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR"); // duplicate value
    case 2147483647: return sv("VK_SAMPLER_YCBCR_MODEL_CONVERSION_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerReductionMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE");
    case 1: return sv("VK_SAMPLER_REDUCTION_MODE_MIN");
    case 2: return sv("VK_SAMPLER_REDUCTION_MODE_MAX");
    case 1000521000: return sv("VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_RANGECLAMP_QCOM");
    // case 0: return sv("VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT"); // duplicate value
    // case 1: return sv("VK_SAMPLER_REDUCTION_MODE_MIN_EXT"); // duplicate value
    // case 2: return sv("VK_SAMPLER_REDUCTION_MODE_MAX_EXT"); // duplicate value
    case 2147483647: return sv("VK_SAMPLER_REDUCTION_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerMipmapMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SAMPLER_MIPMAP_MODE_NEAREST");
    case 1: return sv("VK_SAMPLER_MIPMAP_MODE_LINEAR");
    case 2147483647: return sv("VK_SAMPLER_MIPMAP_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT");
    case 2: return sv("VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT");
    case 8: return sv("VK_SAMPLER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT");
    case 4: return sv("VK_SAMPLER_CREATE_NON_SEAMLESS_CUBE_MAP_BIT_EXT");
    case 16: return sv("VK_SAMPLER_CREATE_IMAGE_PROCESSING_BIT_QCOM");
    case 2147483647: return sv("VK_SAMPLER_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSamplerAddressMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SAMPLER_ADDRESS_MODE_REPEAT");
    case 1: return sv("VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT");
    case 2: return sv("VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE");
    case 3: return sv("VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER");
    case 4: return sv("VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE");
    // case 4: return sv("VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE_KHR"); // duplicate value
    case 2147483647: return sv("VK_SAMPLER_ADDRESS_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkSampleCountFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_SAMPLE_COUNT_1_BIT");
    case 2: return sv("VK_SAMPLE_COUNT_2_BIT");
    case 4: return sv("VK_SAMPLE_COUNT_4_BIT");
    case 8: return sv("VK_SAMPLE_COUNT_8_BIT");
    case 16: return sv("VK_SAMPLE_COUNT_16_BIT");
    case 32: return sv("VK_SAMPLE_COUNT_32_BIT");
    case 64: return sv("VK_SAMPLE_COUNT_64_BIT");
    case 2147483647: return sv("VK_SAMPLE_COUNT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkResult(int64_t value) {
    switch (value) {
    case 0: return sv("VK_SUCCESS");
    case 1: return sv("VK_NOT_READY");
    case 2: return sv("VK_TIMEOUT");
    case 3: return sv("VK_EVENT_SET");
    case 4: return sv("VK_EVENT_RESET");
    case 5: return sv("VK_INCOMPLETE");
    case -1: return sv("VK_ERROR_OUT_OF_HOST_MEMORY");
    case -2: return sv("VK_ERROR_OUT_OF_DEVICE_MEMORY");
    case -3: return sv("VK_ERROR_INITIALIZATION_FAILED");
    case -4: return sv("VK_ERROR_DEVICE_LOST");
    case -5: return sv("VK_ERROR_MEMORY_MAP_FAILED");
    case -6: return sv("VK_ERROR_LAYER_NOT_PRESENT");
    case -7: return sv("VK_ERROR_EXTENSION_NOT_PRESENT");
    case -8: return sv("VK_ERROR_FEATURE_NOT_PRESENT");
    case -9: return sv("VK_ERROR_INCOMPATIBLE_DRIVER");
    case -10: return sv("VK_ERROR_TOO_MANY_OBJECTS");
    case -11: return sv("VK_ERROR_FORMAT_NOT_SUPPORTED");
    case -12: return sv("VK_ERROR_FRAGMENTED_POOL");
    case -13: return sv("VK_ERROR_UNKNOWN");
    case -1000011001: return sv("VK_ERROR_VALIDATION_FAILED");
    case -1000069000: return sv("VK_ERROR_OUT_OF_POOL_MEMORY");
    case -1000072003: return sv("VK_ERROR_INVALID_EXTERNAL_HANDLE");
    case -1000257000: return sv("VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS");
    case -1000161000: return sv("VK_ERROR_FRAGMENTATION");
    case 1000297000: return sv("VK_PIPELINE_COMPILE_REQUIRED");
    case -1000174001: return sv("VK_ERROR_NOT_PERMITTED");
    case -1000000000: return sv("VK_ERROR_SURFACE_LOST_KHR");
    case -1000000001: return sv("VK_ERROR_NATIVE_WINDOW_IN_USE_KHR");
    case 1000001003: return sv("VK_SUBOPTIMAL_KHR");
    case -1000001004: return sv("VK_ERROR_OUT_OF_DATE_KHR");
    case -1000003001: return sv("VK_ERROR_INCOMPATIBLE_DISPLAY_KHR");
    case -1000012000: return sv("VK_ERROR_INVALID_SHADER_NV");
    case -1000023000: return sv("VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR");
    case -1000023001: return sv("VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR");
    case -1000023002: return sv("VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR");
    case -1000023003: return sv("VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR");
    case -1000023004: return sv("VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR");
    case -1000023005: return sv("VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR");
    case -1000158000: return sv("VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT");
    case -1000208000: return sv("VK_ERROR_PRESENT_TIMING_QUEUE_FULL_EXT");
    case -1000255000: return sv("VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT");
    case 1000268000: return sv("VK_THREAD_IDLE_KHR");
    case 1000268001: return sv("VK_THREAD_DONE_KHR");
    case 1000268002: return sv("VK_OPERATION_DEFERRED_KHR");
    case 1000268003: return sv("VK_OPERATION_NOT_DEFERRED_KHR");
    case -1000299000: return sv("VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR");
    case -1000338000: return sv("VK_ERROR_COMPRESSION_EXHAUSTED_EXT");
    case 1000482000: return sv("VK_INCOMPATIBLE_SHADER_BINARY_EXT");
    case 1000483000: return sv("VK_PIPELINE_BINARY_MISSING_KHR");
    case -1000483000: return sv("VK_ERROR_NOT_ENOUGH_SPACE_KHR");
    // case -1000011001: return sv("VK_ERROR_VALIDATION_FAILED_EXT"); // duplicate value
    // case -1000069000: return sv("VK_ERROR_OUT_OF_POOL_MEMORY_KHR"); // duplicate value
    // case -1000072003: return sv("VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR"); // duplicate value
    // case -1000161000: return sv("VK_ERROR_FRAGMENTATION_EXT"); // duplicate value
    // case -1000174001: return sv("VK_ERROR_NOT_PERMITTED_EXT"); // duplicate value
    // case -1000174001: return sv("VK_ERROR_NOT_PERMITTED_KHR"); // duplicate value
    // case -1000257000: return sv("VK_ERROR_INVALID_DEVICE_ADDRESS_EXT"); // duplicate value
    // case -1000257000: return sv("VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR"); // duplicate value
    // case 1000297000: return sv("VK_PIPELINE_COMPILE_REQUIRED_EXT"); // duplicate value
    // case 1000297000: return sv("VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT"); // duplicate value
    // case 1000482000: return sv("VK_ERROR_INCOMPATIBLE_SHADER_BINARY_EXT"); // duplicate value
    case 2147483647: return sv("VK_RESULT_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkResolveModeFlagBits(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RESOLVE_MODE_NONE");
    case 1: return sv("VK_RESOLVE_MODE_SAMPLE_ZERO_BIT");
    case 2: return sv("VK_RESOLVE_MODE_AVERAGE_BIT");
    case 4: return sv("VK_RESOLVE_MODE_MIN_BIT");
    case 8: return sv("VK_RESOLVE_MODE_MAX_BIT");
    case 16: return sv("VK_RESOLVE_MODE_EXTERNAL_FORMAT_DOWNSAMPLE_BIT_ANDROID");
    case 32: return sv("VK_RESOLVE_MODE_CUSTOM_BIT_EXT");
    // case 0: return sv("VK_RESOLVE_MODE_NONE_KHR"); // duplicate value
    // case 1: return sv("VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_RESOLVE_MODE_AVERAGE_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_RESOLVE_MODE_MIN_BIT_KHR"); // duplicate value
    // case 8: return sv("VK_RESOLVE_MODE_MAX_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_RESOLVE_MODE_EXTERNAL_FORMAT_DOWNSAMPLE_ANDROID"); // duplicate value
    case 2147483647: return sv("VK_RESOLVE_MODE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkResolveImageFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_RESOLVE_IMAGE_SKIP_TRANSFER_FUNCTION_BIT_KHR");
    case 2: return sv("VK_RESOLVE_IMAGE_ENABLE_TRANSFER_FUNCTION_BIT_KHR");
    case 2147483647: return sv("VK_RESOLVE_IMAGE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRenderingFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT");
    case 2: return sv("VK_RENDERING_SUSPENDING_BIT");
    case 4: return sv("VK_RENDERING_RESUMING_BIT");
    case 8: return sv("VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT");
    case 16: return sv("VK_RENDERING_CONTENTS_INLINE_BIT_KHR");
    case 32: return sv("VK_RENDERING_PER_LAYER_FRAGMENT_DENSITY_BIT_VALVE");
    case 64: return sv("VK_RENDERING_FRAGMENT_REGION_BIT_EXT");
    case 128: return sv("VK_RENDERING_CUSTOM_RESOLVE_BIT_EXT");
    case 256: return sv("VK_RENDERING_LOCAL_READ_CONCURRENT_ACCESS_CONTROL_BIT_KHR");
    // case 1: return sv("VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_RENDERING_SUSPENDING_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_RENDERING_RESUMING_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_RENDERING_CONTENTS_INLINE_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_RENDERING_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRenderingAttachmentFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_RENDERING_ATTACHMENT_INPUT_ATTACHMENT_FEEDBACK_BIT_KHR");
    case 2: return sv("VK_RENDERING_ATTACHMENT_RESOLVE_SKIP_TRANSFER_FUNCTION_BIT_KHR");
    case 4: return sv("VK_RENDERING_ATTACHMENT_RESOLVE_ENABLE_TRANSFER_FUNCTION_BIT_KHR");
    case 2147483647: return sv("VK_RENDERING_ATTACHMENT_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRenderPassCreateFlagBits(int64_t value) {
    switch (value) {
    case 2: return sv("VK_RENDER_PASS_CREATE_TRANSFORM_BIT_QCOM");
    case 4: return sv("VK_RENDER_PASS_CREATE_PER_LAYER_FRAGMENT_DENSITY_BIT_VALVE");
    case 2147483647: return sv("VK_RENDER_PASS_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRayTracingShaderGroupTypeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR");
    case 1: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR");
    case 2: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR");
    // case 0: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV"); // duplicate value
    // case 1: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV"); // duplicate value
    // case 2: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV"); // duplicate value
    case 2147483647: return sv("VK_RAY_TRACING_SHADER_GROUP_TYPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRayTracingLssPrimitiveEndCapsModeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RAY_TRACING_LSS_PRIMITIVE_END_CAPS_MODE_NONE_NV");
    case 1: return sv("VK_RAY_TRACING_LSS_PRIMITIVE_END_CAPS_MODE_CHAINED_NV");
    case 2147483647: return sv("VK_RAY_TRACING_LSS_PRIMITIVE_END_CAPS_MODE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRayTracingLssIndexingModeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RAY_TRACING_LSS_INDEXING_MODE_LIST_NV");
    case 1: return sv("VK_RAY_TRACING_LSS_INDEXING_MODE_SUCCESSIVE_NV");
    case 2147483647: return sv("VK_RAY_TRACING_LSS_INDEXING_MODE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRayTracingInvocationReorderModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RAY_TRACING_INVOCATION_REORDER_MODE_NONE_EXT");
    case 1: return sv("VK_RAY_TRACING_INVOCATION_REORDER_MODE_REORDER_EXT");
    // case 0: return sv("VK_RAY_TRACING_INVOCATION_REORDER_MODE_NONE_NV"); // duplicate value
    // case 1: return sv("VK_RAY_TRACING_INVOCATION_REORDER_MODE_REORDER_NV"); // duplicate value
    case 2147483647: return sv("VK_RAY_TRACING_INVOCATION_REORDER_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkRasterizationOrderAMD(int64_t value) {
    switch (value) {
    case 0: return sv("VK_RASTERIZATION_ORDER_STRICT_AMD");
    case 1: return sv("VK_RASTERIZATION_ORDER_RELAXED_AMD");
    case 2147483647: return sv("VK_RASTERIZATION_ORDER_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueueGlobalPriority(int64_t value) {
    switch (value) {
    case 128: return sv("VK_QUEUE_GLOBAL_PRIORITY_LOW");
    case 256: return sv("VK_QUEUE_GLOBAL_PRIORITY_MEDIUM");
    case 512: return sv("VK_QUEUE_GLOBAL_PRIORITY_HIGH");
    case 1024: return sv("VK_QUEUE_GLOBAL_PRIORITY_REALTIME");
    // case 128: return sv("VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT"); // duplicate value
    // case 256: return sv("VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT"); // duplicate value
    // case 512: return sv("VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT"); // duplicate value
    // case 1024: return sv("VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT"); // duplicate value
    // case 128: return sv("VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR"); // duplicate value
    // case 256: return sv("VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR"); // duplicate value
    // case 512: return sv("VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR"); // duplicate value
    // case 1024: return sv("VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR"); // duplicate value
    case 2147483647: return sv("VK_QUEUE_GLOBAL_PRIORITY_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueueFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_QUEUE_GRAPHICS_BIT");
    case 2: return sv("VK_QUEUE_COMPUTE_BIT");
    case 4: return sv("VK_QUEUE_TRANSFER_BIT");
    case 8: return sv("VK_QUEUE_SPARSE_BINDING_BIT");
    case 16: return sv("VK_QUEUE_PROTECTED_BIT");
    case 32: return sv("VK_QUEUE_VIDEO_DECODE_BIT_KHR");
    case 64: return sv("VK_QUEUE_VIDEO_ENCODE_BIT_KHR");
    case 256: return sv("VK_QUEUE_OPTICAL_FLOW_BIT_NV");
    case 1024: return sv("VK_QUEUE_DATA_GRAPH_BIT_ARM");
    case 2147483647: return sv("VK_QUEUE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_QUERY_TYPE_OCCLUSION");
    case 1: return sv("VK_QUERY_TYPE_PIPELINE_STATISTICS");
    case 2: return sv("VK_QUERY_TYPE_TIMESTAMP");
    case 1000023000: return sv("VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR");
    case 1000028004: return sv("VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT");
    case 1000116000: return sv("VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR");
    case 1000150000: return sv("VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR");
    case 1000150001: return sv("VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR");
    case 1000165000: return sv("VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV");
    case 1000210000: return sv("VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL");
    case 1000299000: return sv("VK_QUERY_TYPE_VIDEO_ENCODE_FEEDBACK_KHR");
    case 1000328000: return sv("VK_QUERY_TYPE_MESH_PRIMITIVES_GENERATED_EXT");
    case 1000382000: return sv("VK_QUERY_TYPE_PRIMITIVES_GENERATED_EXT");
    case 1000386000: return sv("VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR");
    case 1000386001: return sv("VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SIZE_KHR");
    case 1000396000: return sv("VK_QUERY_TYPE_MICROMAP_SERIALIZATION_SIZE_EXT");
    case 1000396001: return sv("VK_QUERY_TYPE_MICROMAP_COMPACTED_SIZE_EXT");
    case 2147483647: return sv("VK_QUERY_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryResultStatusKHR(int64_t value) {
    switch (value) {
    case -1: return sv("VK_QUERY_RESULT_STATUS_ERROR_KHR");
    case 0: return sv("VK_QUERY_RESULT_STATUS_NOT_READY_KHR");
    case 1: return sv("VK_QUERY_RESULT_STATUS_COMPLETE_KHR");
    case -1000299000: return sv("VK_QUERY_RESULT_STATUS_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_KHR");
    case 2147483647: return sv("VK_QUERY_RESULT_STATUS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryResultFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_QUERY_RESULT_64_BIT");
    case 2: return sv("VK_QUERY_RESULT_WAIT_BIT");
    case 4: return sv("VK_QUERY_RESULT_WITH_AVAILABILITY_BIT");
    case 8: return sv("VK_QUERY_RESULT_PARTIAL_BIT");
    case 16: return sv("VK_QUERY_RESULT_WITH_STATUS_BIT_KHR");
    case 2147483647: return sv("VK_QUERY_RESULT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryPoolSamplingModeINTEL(int64_t value) {
    switch (value) {
    case 0: return sv("VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL");
    case 2147483647: return sv("VK_QUERY_POOL_SAMPLING_MODE_MAX_ENUM_INTEL");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryPoolCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_QUERY_POOL_CREATE_RESET_BIT_KHR");
    case 2147483647: return sv("VK_QUERY_POOL_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryPipelineStatisticFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT");
    case 2: return sv("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT");
    case 4: return sv("VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT");
    case 8: return sv("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT");
    case 16: return sv("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT");
    case 32: return sv("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT");
    case 64: return sv("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT");
    case 128: return sv("VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT");
    case 256: return sv("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT");
    case 512: return sv("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT");
    case 1024: return sv("VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT");
    case 2048: return sv("VK_QUERY_PIPELINE_STATISTIC_TASK_SHADER_INVOCATIONS_BIT_EXT");
    case 4096: return sv("VK_QUERY_PIPELINE_STATISTIC_MESH_SHADER_INVOCATIONS_BIT_EXT");
    case 8192: return sv("VK_QUERY_PIPELINE_STATISTIC_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI");
    case 2147483647: return sv("VK_QUERY_PIPELINE_STATISTIC_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkQueryControlFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_QUERY_CONTROL_PRECISE_BIT");
    case 2147483647: return sv("VK_QUERY_CONTROL_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkProvokingVertexModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT");
    case 1: return sv("VK_PROVOKING_VERTEX_MODE_LAST_VERTEX_EXT");
    case 2147483647: return sv("VK_PROVOKING_VERTEX_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPrimitiveTopology(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PRIMITIVE_TOPOLOGY_POINT_LIST");
    case 1: return sv("VK_PRIMITIVE_TOPOLOGY_LINE_LIST");
    case 2: return sv("VK_PRIMITIVE_TOPOLOGY_LINE_STRIP");
    case 3: return sv("VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST");
    case 4: return sv("VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP");
    case 5: return sv("VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN");
    case 6: return sv("VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY");
    case 7: return sv("VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY");
    case 8: return sv("VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY");
    case 9: return sv("VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY");
    case 10: return sv("VK_PRIMITIVE_TOPOLOGY_PATCH_LIST");
    case 2147483647: return sv("VK_PRIMITIVE_TOPOLOGY_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPresentTimingInfoFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PRESENT_TIMING_INFO_PRESENT_AT_RELATIVE_TIME_BIT_EXT");
    case 2: return sv("VK_PRESENT_TIMING_INFO_PRESENT_AT_NEAREST_REFRESH_CYCLE_BIT_EXT");
    case 2147483647: return sv("VK_PRESENT_TIMING_INFO_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPresentStageFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PRESENT_STAGE_QUEUE_OPERATIONS_END_BIT_EXT");
    case 2: return sv("VK_PRESENT_STAGE_REQUEST_DEQUEUED_BIT_EXT");
    case 4: return sv("VK_PRESENT_STAGE_IMAGE_FIRST_PIXEL_OUT_BIT_EXT");
    case 8: return sv("VK_PRESENT_STAGE_IMAGE_FIRST_PIXEL_VISIBLE_BIT_EXT");
    case 2147483647: return sv("VK_PRESENT_STAGE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPresentScalingFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PRESENT_SCALING_ONE_TO_ONE_BIT_KHR");
    case 2: return sv("VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_KHR");
    case 4: return sv("VK_PRESENT_SCALING_STRETCH_BIT_KHR");
    // case 1: return sv("VK_PRESENT_SCALING_ONE_TO_ONE_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_PRESENT_SCALING_STRETCH_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PRESENT_SCALING_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPresentModeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PRESENT_MODE_IMMEDIATE_KHR");
    case 1: return sv("VK_PRESENT_MODE_MAILBOX_KHR");
    case 2: return sv("VK_PRESENT_MODE_FIFO_KHR");
    case 3: return sv("VK_PRESENT_MODE_FIFO_RELAXED_KHR");
    case 1000111000: return sv("VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR");
    case 1000111001: return sv("VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR");
    case 1000361000: return sv("VK_PRESENT_MODE_FIFO_LATEST_READY_KHR");
    // case 1000361000: return sv("VK_PRESENT_MODE_FIFO_LATEST_READY_EXT"); // duplicate value
    case 2147483647: return sv("VK_PRESENT_MODE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPresentGravityFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PRESENT_GRAVITY_MIN_BIT_KHR");
    case 2: return sv("VK_PRESENT_GRAVITY_MAX_BIT_KHR");
    case 4: return sv("VK_PRESENT_GRAVITY_CENTERED_BIT_KHR");
    // case 1: return sv("VK_PRESENT_GRAVITY_MIN_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_PRESENT_GRAVITY_MAX_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_PRESENT_GRAVITY_CENTERED_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PRESENT_GRAVITY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPolygonMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_POLYGON_MODE_FILL");
    case 1: return sv("VK_POLYGON_MODE_LINE");
    case 2: return sv("VK_POLYGON_MODE_POINT");
    case 1000153000: return sv("VK_POLYGON_MODE_FILL_RECTANGLE_NV");
    case 2147483647: return sv("VK_POLYGON_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPointClippingBehavior(int64_t value) {
    switch (value) {
    case 0: return sv("VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES");
    case 1: return sv("VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY");
    // case 0: return sv("VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR"); // duplicate value
    // case 1: return sv("VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR"); // duplicate value
    case 2147483647: return sv("VK_POINT_CLIPPING_BEHAVIOR_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineStageFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT");
    case 2: return sv("VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT");
    case 4: return sv("VK_PIPELINE_STAGE_VERTEX_INPUT_BIT");
    case 8: return sv("VK_PIPELINE_STAGE_VERTEX_SHADER_BIT");
    case 16: return sv("VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT");
    case 32: return sv("VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT");
    case 64: return sv("VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT");
    case 128: return sv("VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT");
    case 256: return sv("VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT");
    case 512: return sv("VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT");
    case 1024: return sv("VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT");
    case 2048: return sv("VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT");
    case 4096: return sv("VK_PIPELINE_STAGE_TRANSFER_BIT");
    case 8192: return sv("VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT");
    case 16384: return sv("VK_PIPELINE_STAGE_HOST_BIT");
    case 32768: return sv("VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT");
    case 65536: return sv("VK_PIPELINE_STAGE_ALL_COMMANDS_BIT");
    case 0: return sv("VK_PIPELINE_STAGE_NONE");
    case 16777216: return sv("VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT");
    case 262144: return sv("VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT");
    case 33554432: return sv("VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR");
    case 2097152: return sv("VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR");
    case 8388608: return sv("VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT");
    case 4194304: return sv("VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    case 524288: return sv("VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT");
    case 1048576: return sv("VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT");
    case 131072: return sv("VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_EXT");
    // case 4194304: return sv("VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV"); // duplicate value
    // case 2097152: return sv("VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV"); // duplicate value
    // case 33554432: return sv("VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV"); // duplicate value
    // case 524288: return sv("VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV"); // duplicate value
    // case 1048576: return sv("VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV"); // duplicate value
    // case 131072: return sv("VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV"); // duplicate value
    // case 0: return sv("VK_PIPELINE_STAGE_NONE_KHR"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_STAGE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineShaderStageCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT");
    case 2: return sv("VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT");
    // case 1: return sv("VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_SHADER_STAGE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineRobustnessImageBehavior(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT");
    case 1: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED");
    case 2: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS");
    case 3: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2");
    // case 0: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT_EXT"); // duplicate value
    // case 1: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED_EXT"); // duplicate value
    // case 2: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_EXT"); // duplicate value
    // case 3: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineRobustnessBufferBehavior(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT");
    case 1: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED");
    case 2: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS");
    case 3: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2");
    // case 0: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT_EXT"); // duplicate value
    // case 1: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED_EXT"); // duplicate value
    // case 2: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_EXT"); // duplicate value
    // case 3: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineLayoutCreateFlagBits(int64_t value) {
    switch (value) {
    case 2: return sv("VK_PIPELINE_LAYOUT_CREATE_INDEPENDENT_SETS_BIT_EXT");
    case 2147483647: return sv("VK_PIPELINE_LAYOUT_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineExecutableStatisticFormatKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR");
    case 1: return sv("VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR");
    case 2: return sv("VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR");
    case 3: return sv("VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR");
    case 2147483647: return sv("VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineDepthStencilStateCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT");
    case 2: return sv("VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT");
    // case 1: return sv("VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_ARM"); // duplicate value
    // case 2: return sv("VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_ARM"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_DEPTH_STENCIL_STATE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineCreationFeedbackFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT");
    case 2: return sv("VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT");
    case 4: return sv("VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT");
    // case 1: return sv("VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_CREATION_FEEDBACK_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT");
    case 2: return sv("VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT");
    case 4: return sv("VK_PIPELINE_CREATE_DERIVATIVE_BIT");
    case 16: return sv("VK_PIPELINE_CREATE_DISPATCH_BASE_BIT");
    case 8: return sv("VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT");
    case 256: return sv("VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT");
    case 512: return sv("VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT");
    case 134217728: return sv("VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT");
    case 1073741824: return sv("VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT");
    case 16384: return sv("VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR");
    case 32768: return sv("VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR");
    case 65536: return sv("VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR");
    case 131072: return sv("VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR");
    case 4096: return sv("VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR");
    case 8192: return sv("VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR");
    case 524288: return sv("VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR");
    case 32: return sv("VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV");
    case 4194304: return sv("VK_PIPELINE_CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT");
    case 2097152: return sv("VK_PIPELINE_CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    case 64: return sv("VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR");
    case 128: return sv("VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR");
    case 262144: return sv("VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV");
    case 2048: return sv("VK_PIPELINE_CREATE_LIBRARY_BIT_KHR");
    case 536870912: return sv("VK_PIPELINE_CREATE_DESCRIPTOR_BUFFER_BIT_EXT");
    case 8388608: return sv("VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT");
    case 1024: return sv("VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT");
    case 1048576: return sv("VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV");
    case 33554432: return sv("VK_PIPELINE_CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT");
    case 67108864: return sv("VK_PIPELINE_CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT");
    case 16777216: return sv("VK_PIPELINE_CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT");
    // case 16: return sv("VK_PIPELINE_CREATE_DISPATCH_BASE"); // duplicate value
    // case 8: return sv("VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_PIPELINE_CREATE_DISPATCH_BASE_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_PIPELINE_CREATE_DISPATCH_BASE_KHR"); // duplicate value
    // case 4194304: return sv("VK_PIPELINE_RASTERIZATION_STATE_CREATE_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT"); // duplicate value
    // case 2097152: return sv("VK_PIPELINE_RASTERIZATION_STATE_CREATE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR"); // duplicate value
    // case 256: return sv("VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT"); // duplicate value
    // case 512: return sv("VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT"); // duplicate value
    // case 134217728: return sv("VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT_EXT"); // duplicate value
    // case 1073741824: return sv("VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineCompilerControlFlagBitsAMD(int64_t value) {
    switch (value) {
    case 2147483647: return sv("VK_PIPELINE_COMPILER_CONTROL_FLAG_BITS_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineColorBlendStateCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT");
    // case 1: return sv("VK_PIPELINE_COLOR_BLEND_STATE_CREATE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_ARM"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_COLOR_BLEND_STATE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineCacheHeaderVersion(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_CACHE_HEADER_VERSION_ONE");
    case 1000629000: return sv("VK_PIPELINE_CACHE_HEADER_VERSION_DATA_GRAPH_QCOM");
    case 2147483647: return sv("VK_PIPELINE_CACHE_HEADER_VERSION_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineCacheCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT");
    case 8: return sv("VK_PIPELINE_CACHE_CREATE_INTERNALLY_SYNCHRONIZED_MERGE_BIT_KHR");
    // case 1: return sv("VK_PIPELINE_CACHE_CREATE_EXTERNALLY_SYNCHRONIZED_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_CACHE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPipelineBindPoint(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PIPELINE_BIND_POINT_GRAPHICS");
    case 1: return sv("VK_PIPELINE_BIND_POINT_COMPUTE");
    case 1000165000: return sv("VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR");
    case 1000369003: return sv("VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI");
    case 1000507000: return sv("VK_PIPELINE_BIND_POINT_DATA_GRAPH_ARM");
    // case 1000165000: return sv("VK_PIPELINE_BIND_POINT_RAY_TRACING_NV"); // duplicate value
    case 2147483647: return sv("VK_PIPELINE_BIND_POINT_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPhysicalDeviceType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PHYSICAL_DEVICE_TYPE_OTHER");
    case 1: return sv("VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU");
    case 2: return sv("VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU");
    case 3: return sv("VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU");
    case 4: return sv("VK_PHYSICAL_DEVICE_TYPE_CPU");
    case 2147483647: return sv("VK_PHYSICAL_DEVICE_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPhysicalDeviceLayeredApiKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_VULKAN_KHR");
    case 1: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_D3D12_KHR");
    case 2: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_METAL_KHR");
    case 3: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_OPENGL_KHR");
    case 4: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_OPENGLES_KHR");
    case 2147483647: return sv("VK_PHYSICAL_DEVICE_LAYERED_API_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPhysicalDeviceDataGraphProcessingEngineTypeARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_PROCESSING_ENGINE_TYPE_DEFAULT_ARM");
    case 1000629000: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_PROCESSING_ENGINE_TYPE_NEURAL_QCOM");
    case 1000629001: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_PROCESSING_ENGINE_TYPE_COMPUTE_QCOM");
    case 2147483647: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_PROCESSING_ENGINE_TYPE_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPhysicalDeviceDataGraphOperationTypeARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_TYPE_SPIRV_EXTENDED_INSTRUCTION_SET_ARM");
    case 1000629000: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_TYPE_NEURAL_MODEL_QCOM");
    case 1000629001: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_TYPE_BUILTIN_MODEL_QCOM");
    case 2147483647: return sv("VK_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_TYPE_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceValueTypeINTEL(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL");
    case 1: return sv("VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL");
    case 2: return sv("VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL");
    case 3: return sv("VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL");
    case 4: return sv("VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL");
    case 2147483647: return sv("VK_PERFORMANCE_VALUE_TYPE_MAX_ENUM_INTEL");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceParameterTypeINTEL(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL");
    case 1: return sv("VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL");
    case 2147483647: return sv("VK_PERFORMANCE_PARAMETER_TYPE_MAX_ENUM_INTEL");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceOverrideTypeINTEL(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL");
    case 1: return sv("VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL");
    case 2147483647: return sv("VK_PERFORMANCE_OVERRIDE_TYPE_MAX_ENUM_INTEL");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceCounterUnitKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR");
    case 1: return sv("VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR");
    case 2: return sv("VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR");
    case 3: return sv("VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR");
    case 4: return sv("VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR");
    case 5: return sv("VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR");
    case 6: return sv("VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR");
    case 7: return sv("VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR");
    case 8: return sv("VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR");
    case 9: return sv("VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR");
    case 10: return sv("VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR");
    case 2147483647: return sv("VK_PERFORMANCE_COUNTER_UNIT_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceCounterStorageKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR");
    case 1: return sv("VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR");
    case 2: return sv("VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR");
    case 3: return sv("VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR");
    case 4: return sv("VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR");
    case 5: return sv("VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR");
    case 2147483647: return sv("VK_PERFORMANCE_COUNTER_STORAGE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceCounterScopeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR");
    case 1: return sv("VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR");
    case 2: return sv("VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR");
    // case 0: return sv("VK_QUERY_SCOPE_COMMAND_BUFFER_KHR"); // duplicate value
    // case 1: return sv("VK_QUERY_SCOPE_RENDER_PASS_KHR"); // duplicate value
    // case 2: return sv("VK_QUERY_SCOPE_COMMAND_KHR"); // duplicate value
    case 2147483647: return sv("VK_PERFORMANCE_COUNTER_SCOPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceCounterDescriptionFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR");
    case 2: return sv("VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR");
    // case 1: return sv("VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_KHR"); // duplicate value
    // case 2: return sv("VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_KHR"); // duplicate value
    case 2147483647: return sv("VK_PERFORMANCE_COUNTER_DESCRIPTION_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPerformanceConfigurationTypeINTEL(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL");
    case 2147483647: return sv("VK_PERFORMANCE_CONFIGURATION_TYPE_MAX_ENUM_INTEL");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPeerMemoryFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT");
    case 2: return sv("VK_PEER_MEMORY_FEATURE_COPY_DST_BIT");
    case 4: return sv("VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT");
    case 8: return sv("VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT");
    // case 1: return sv("VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR"); // duplicate value
    // case 8: return sv("VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_PEER_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPastPresentationTimingFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PAST_PRESENTATION_TIMING_ALLOW_PARTIAL_RESULTS_BIT_EXT");
    case 2: return sv("VK_PAST_PRESENTATION_TIMING_ALLOW_OUT_OF_ORDER_RESULTS_BIT_EXT");
    case 2147483647: return sv("VK_PAST_PRESENTATION_TIMING_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPartitionedAccelerationStructureOpTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_OP_TYPE_WRITE_INSTANCE_NV");
    case 1: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_OP_TYPE_UPDATE_INSTANCE_NV");
    case 2: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_OP_TYPE_WRITE_PARTITION_TRANSLATION_NV");
    case 2147483647: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_OP_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkPartitionedAccelerationStructureInstanceFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_TRIANGLE_FACING_CULL_DISABLE_BIT_NV");
    case 2: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_TRIANGLE_FLIP_FACING_BIT_NV");
    case 4: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_FORCE_OPAQUE_BIT_NV");
    case 8: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_FORCE_NO_OPAQUE_BIT_NV");
    case 16: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_ENABLE_EXPLICIT_BOUNDING_BOX_NV");
    case 2147483647: return sv("VK_PARTITIONED_ACCELERATION_STRUCTURE_INSTANCE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOutOfBandQueueTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OUT_OF_BAND_QUEUE_TYPE_RENDER_NV");
    case 1: return sv("VK_OUT_OF_BAND_QUEUE_TYPE_PRESENT_NV");
    case 2147483647: return sv("VK_OUT_OF_BAND_QUEUE_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowUsageFlagBitsNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OPTICAL_FLOW_USAGE_UNKNOWN_NV");
    case 1: return sv("VK_OPTICAL_FLOW_USAGE_INPUT_BIT_NV");
    case 2: return sv("VK_OPTICAL_FLOW_USAGE_OUTPUT_BIT_NV");
    case 4: return sv("VK_OPTICAL_FLOW_USAGE_HINT_BIT_NV");
    case 8: return sv("VK_OPTICAL_FLOW_USAGE_COST_BIT_NV");
    case 16: return sv("VK_OPTICAL_FLOW_USAGE_GLOBAL_FLOW_BIT_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_USAGE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowSessionCreateFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_HINT_BIT_NV");
    case 2: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_COST_BIT_NV");
    case 4: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_GLOBAL_FLOW_BIT_NV");
    case 8: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_ALLOW_REGIONS_BIT_NV");
    case 16: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_BOTH_DIRECTIONS_BIT_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_SESSION_CREATE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowSessionBindingPointNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_UNKNOWN_NV");
    case 1: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_INPUT_NV");
    case 2: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_REFERENCE_NV");
    case 3: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_HINT_NV");
    case 4: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_FLOW_VECTOR_NV");
    case 5: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_FLOW_VECTOR_NV");
    case 6: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_COST_NV");
    case 7: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_COST_NV");
    case 8: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_GLOBAL_FLOW_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_SESSION_BINDING_POINT_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowPerformanceLevelNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_UNKNOWN_NV");
    case 1: return sv("VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_SLOW_NV");
    case 2: return sv("VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_MEDIUM_NV");
    case 3: return sv("VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_FAST_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowGridSizeFlagBitsNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OPTICAL_FLOW_GRID_SIZE_UNKNOWN_NV");
    case 1: return sv("VK_OPTICAL_FLOW_GRID_SIZE_1X1_BIT_NV");
    case 2: return sv("VK_OPTICAL_FLOW_GRID_SIZE_2X2_BIT_NV");
    case 4: return sv("VK_OPTICAL_FLOW_GRID_SIZE_4X4_BIT_NV");
    case 8: return sv("VK_OPTICAL_FLOW_GRID_SIZE_8X8_BIT_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_GRID_SIZE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpticalFlowExecuteFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_OPTICAL_FLOW_EXECUTE_DISABLE_TEMPORAL_HINTS_BIT_NV");
    case 2147483647: return sv("VK_OPTICAL_FLOW_EXECUTE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpacityMicromapSpecialIndexEXT(int64_t value) {
    switch (value) {
    case -1: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_TRANSPARENT_EXT");
    case -2: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_OPAQUE_EXT");
    case -3: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_TRANSPARENT_EXT");
    case -4: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_OPAQUE_EXT");
    case -5: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_CLUSTER_GEOMETRY_DISABLE_OPACITY_MICROMAP_NV");
    case 2147483647: return sv("VK_OPACITY_MICROMAP_SPECIAL_INDEX_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkOpacityMicromapFormatEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_OPACITY_MICROMAP_FORMAT_2_STATE_EXT");
    case 2: return sv("VK_OPACITY_MICROMAP_FORMAT_4_STATE_EXT");
    case 2147483647: return sv("VK_OPACITY_MICROMAP_FORMAT_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkObjectType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_OBJECT_TYPE_UNKNOWN");
    case 1: return sv("VK_OBJECT_TYPE_INSTANCE");
    case 2: return sv("VK_OBJECT_TYPE_PHYSICAL_DEVICE");
    case 3: return sv("VK_OBJECT_TYPE_DEVICE");
    case 4: return sv("VK_OBJECT_TYPE_QUEUE");
    case 5: return sv("VK_OBJECT_TYPE_SEMAPHORE");
    case 6: return sv("VK_OBJECT_TYPE_COMMAND_BUFFER");
    case 7: return sv("VK_OBJECT_TYPE_FENCE");
    case 8: return sv("VK_OBJECT_TYPE_DEVICE_MEMORY");
    case 9: return sv("VK_OBJECT_TYPE_BUFFER");
    case 10: return sv("VK_OBJECT_TYPE_IMAGE");
    case 11: return sv("VK_OBJECT_TYPE_EVENT");
    case 12: return sv("VK_OBJECT_TYPE_QUERY_POOL");
    case 13: return sv("VK_OBJECT_TYPE_BUFFER_VIEW");
    case 14: return sv("VK_OBJECT_TYPE_IMAGE_VIEW");
    case 15: return sv("VK_OBJECT_TYPE_SHADER_MODULE");
    case 16: return sv("VK_OBJECT_TYPE_PIPELINE_CACHE");
    case 17: return sv("VK_OBJECT_TYPE_PIPELINE_LAYOUT");
    case 18: return sv("VK_OBJECT_TYPE_RENDER_PASS");
    case 19: return sv("VK_OBJECT_TYPE_PIPELINE");
    case 20: return sv("VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT");
    case 21: return sv("VK_OBJECT_TYPE_SAMPLER");
    case 22: return sv("VK_OBJECT_TYPE_DESCRIPTOR_POOL");
    case 23: return sv("VK_OBJECT_TYPE_DESCRIPTOR_SET");
    case 24: return sv("VK_OBJECT_TYPE_FRAMEBUFFER");
    case 25: return sv("VK_OBJECT_TYPE_COMMAND_POOL");
    case 1000085000: return sv("VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE");
    case 1000156000: return sv("VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION");
    case 1000295000: return sv("VK_OBJECT_TYPE_PRIVATE_DATA_SLOT");
    case 1000000000: return sv("VK_OBJECT_TYPE_SURFACE_KHR");
    case 1000001000: return sv("VK_OBJECT_TYPE_SWAPCHAIN_KHR");
    case 1000002000: return sv("VK_OBJECT_TYPE_DISPLAY_KHR");
    case 1000002001: return sv("VK_OBJECT_TYPE_DISPLAY_MODE_KHR");
    case 1000011000: return sv("VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT");
    case 1000023000: return sv("VK_OBJECT_TYPE_VIDEO_SESSION_KHR");
    case 1000023001: return sv("VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR");
    case 1000029000: return sv("VK_OBJECT_TYPE_CU_MODULE_NVX");
    case 1000029001: return sv("VK_OBJECT_TYPE_CU_FUNCTION_NVX");
    case 1000128000: return sv("VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT");
    case 1000150000: return sv("VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR");
    case 1000160000: return sv("VK_OBJECT_TYPE_VALIDATION_CACHE_EXT");
    case 1000165000: return sv("VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV");
    case 1000210000: return sv("VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL");
    case 1000268000: return sv("VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR");
    case 1000277000: return sv("VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV");
    case 1000366000: return sv("VK_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA");
    case 1000396000: return sv("VK_OBJECT_TYPE_MICROMAP_EXT");
    case 1000460000: return sv("VK_OBJECT_TYPE_TENSOR_ARM");
    case 1000460001: return sv("VK_OBJECT_TYPE_TENSOR_VIEW_ARM");
    case 1000464000: return sv("VK_OBJECT_TYPE_OPTICAL_FLOW_SESSION_NV");
    case 1000482000: return sv("VK_OBJECT_TYPE_SHADER_EXT");
    case 1000483000: return sv("VK_OBJECT_TYPE_PIPELINE_BINARY_KHR");
    case 1000507000: return sv("VK_OBJECT_TYPE_DATA_GRAPH_PIPELINE_SESSION_ARM");
    case 1000556000: return sv("VK_OBJECT_TYPE_EXTERNAL_COMPUTE_QUEUE_NV");
    case 1000572000: return sv("VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_EXT");
    case 1000572001: return sv("VK_OBJECT_TYPE_INDIRECT_EXECUTION_SET_EXT");
    // case 1000085000: return sv("VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR"); // duplicate value
    // case 1000156000: return sv("VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR"); // duplicate value
    // case 1000295000: return sv("VK_OBJECT_TYPE_PRIVATE_DATA_SLOT_EXT"); // duplicate value
    case 2147483647: return sv("VK_OBJECT_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMicromapTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_MICROMAP_TYPE_OPACITY_MICROMAP_EXT");
    case 2147483647: return sv("VK_MICROMAP_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMicromapCreateFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MICROMAP_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT");
    case 2147483647: return sv("VK_MICROMAP_CREATE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryUnmapFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MEMORY_UNMAP_RESERVE_BIT_EXT");
    case 2147483647: return sv("VK_MEMORY_UNMAP_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryPropertyFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT");
    case 2: return sv("VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT");
    case 4: return sv("VK_MEMORY_PROPERTY_HOST_COHERENT_BIT");
    case 8: return sv("VK_MEMORY_PROPERTY_HOST_CACHED_BIT");
    case 16: return sv("VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT");
    case 32: return sv("VK_MEMORY_PROPERTY_PROTECTED_BIT");
    case 64: return sv("VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD");
    case 128: return sv("VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD");
    case 256: return sv("VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV");
    case 2147483647: return sv("VK_MEMORY_PROPERTY_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryOverallocationBehaviorAMD(int64_t value) {
    switch (value) {
    case 0: return sv("VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD");
    case 1: return sv("VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD");
    case 2: return sv("VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD");
    case 2147483647: return sv("VK_MEMORY_OVERALLOCATION_BEHAVIOR_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryMapFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MEMORY_MAP_PLACED_BIT_EXT");
    case 2147483647: return sv("VK_MEMORY_MAP_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryHeapFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MEMORY_HEAP_DEVICE_LOCAL_BIT");
    case 2: return sv("VK_MEMORY_HEAP_MULTI_INSTANCE_BIT");
    case 8: return sv("VK_MEMORY_HEAP_TILE_MEMORY_BIT_QCOM");
    // case 2: return sv("VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_MEMORY_HEAP_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkMemoryAllocateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT");
    case 2: return sv("VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT");
    case 4: return sv("VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT");
    case 8: return sv("VK_MEMORY_ALLOCATE_ZERO_INITIALIZE_BIT_EXT");
    // case 1: return sv("VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_MEMORY_ALLOCATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkLogicOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_LOGIC_OP_CLEAR");
    case 1: return sv("VK_LOGIC_OP_AND");
    case 2: return sv("VK_LOGIC_OP_AND_REVERSE");
    case 3: return sv("VK_LOGIC_OP_COPY");
    case 4: return sv("VK_LOGIC_OP_AND_INVERTED");
    case 5: return sv("VK_LOGIC_OP_NO_OP");
    case 6: return sv("VK_LOGIC_OP_XOR");
    case 7: return sv("VK_LOGIC_OP_OR");
    case 8: return sv("VK_LOGIC_OP_NOR");
    case 9: return sv("VK_LOGIC_OP_EQUIVALENT");
    case 10: return sv("VK_LOGIC_OP_INVERT");
    case 11: return sv("VK_LOGIC_OP_OR_REVERSE");
    case 12: return sv("VK_LOGIC_OP_COPY_INVERTED");
    case 13: return sv("VK_LOGIC_OP_OR_INVERTED");
    case 14: return sv("VK_LOGIC_OP_NAND");
    case 15: return sv("VK_LOGIC_OP_SET");
    case 2147483647: return sv("VK_LOGIC_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkLineRasterizationMode(int64_t value) {
    switch (value) {
    case 0: return sv("VK_LINE_RASTERIZATION_MODE_DEFAULT");
    case 1: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR");
    case 2: return sv("VK_LINE_RASTERIZATION_MODE_BRESENHAM");
    case 3: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH");
    // case 0: return sv("VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT"); // duplicate value
    // case 1: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT"); // duplicate value
    // case 2: return sv("VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT"); // duplicate value
    // case 3: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT"); // duplicate value
    // case 0: return sv("VK_LINE_RASTERIZATION_MODE_DEFAULT_KHR"); // duplicate value
    // case 1: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR_KHR"); // duplicate value
    // case 2: return sv("VK_LINE_RASTERIZATION_MODE_BRESENHAM_KHR"); // duplicate value
    // case 3: return sv("VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_KHR"); // duplicate value
    case 2147483647: return sv("VK_LINE_RASTERIZATION_MODE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkLayeredDriverUnderlyingApiMSFT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_LAYERED_DRIVER_UNDERLYING_API_NONE_MSFT");
    case 1: return sv("VK_LAYERED_DRIVER_UNDERLYING_API_D3D12_MSFT");
    case 2147483647: return sv("VK_LAYERED_DRIVER_UNDERLYING_API_MAX_ENUM_MSFT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkLayerSettingTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_LAYER_SETTING_TYPE_BOOL32_EXT");
    case 1: return sv("VK_LAYER_SETTING_TYPE_INT32_EXT");
    case 2: return sv("VK_LAYER_SETTING_TYPE_INT64_EXT");
    case 3: return sv("VK_LAYER_SETTING_TYPE_UINT32_EXT");
    case 4: return sv("VK_LAYER_SETTING_TYPE_UINT64_EXT");
    case 5: return sv("VK_LAYER_SETTING_TYPE_FLOAT32_EXT");
    case 6: return sv("VK_LAYER_SETTING_TYPE_FLOAT64_EXT");
    case 7: return sv("VK_LAYER_SETTING_TYPE_STRING_EXT");
    case 2147483647: return sv("VK_LAYER_SETTING_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkLatencyMarkerNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_LATENCY_MARKER_SIMULATION_START_NV");
    case 1: return sv("VK_LATENCY_MARKER_SIMULATION_END_NV");
    case 2: return sv("VK_LATENCY_MARKER_RENDERSUBMIT_START_NV");
    case 3: return sv("VK_LATENCY_MARKER_RENDERSUBMIT_END_NV");
    case 4: return sv("VK_LATENCY_MARKER_PRESENT_START_NV");
    case 5: return sv("VK_LATENCY_MARKER_PRESENT_END_NV");
    case 6: return sv("VK_LATENCY_MARKER_INPUT_SAMPLE_NV");
    case 7: return sv("VK_LATENCY_MARKER_TRIGGER_FLASH_NV");
    case 8: return sv("VK_LATENCY_MARKER_OUT_OF_BAND_RENDERSUBMIT_START_NV");
    case 9: return sv("VK_LATENCY_MARKER_OUT_OF_BAND_RENDERSUBMIT_END_NV");
    case 10: return sv("VK_LATENCY_MARKER_OUT_OF_BAND_PRESENT_START_NV");
    case 11: return sv("VK_LATENCY_MARKER_OUT_OF_BAND_PRESENT_END_NV");
    case 2147483647: return sv("VK_LATENCY_MARKER_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkInternalAllocationType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE");
    case 2147483647: return sv("VK_INTERNAL_ALLOCATION_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkInstanceCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR");
    case 2147483647: return sv("VK_INSTANCE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectStateFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV");
    case 2147483647: return sv("VK_INDIRECT_STATE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectExecutionSetInfoTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT");
    case 1: return sv("VK_INDIRECT_EXECUTION_SET_INFO_TYPE_SHADER_OBJECTS_EXT");
    case 2147483647: return sv("VK_INDIRECT_EXECUTION_SET_INFO_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectCommandsTokenTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV");
    case 1: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV");
    case 2: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV");
    case 3: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV");
    case 4: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV");
    case 5: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV");
    case 6: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV");
    case 7: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV");
    case 1000135000: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_DATA_NV");
    case 1000328000: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV");
    case 1000428003: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NV");
    case 1000428004: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NV");
    case 2147483647: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectCommandsTokenTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT");
    case 1: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT");
    case 2: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_SEQUENCE_INDEX_EXT");
    case 3: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_EXT");
    case 4: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_EXT");
    case 5: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_EXT");
    case 6: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_EXT");
    case 7: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_COUNT_EXT");
    case 8: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_COUNT_EXT");
    case 9: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_EXT");
    case 1000135000: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_DATA_EXT");
    case 1000135001: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_DATA_SEQUENCE_INDEX_EXT");
    case 1000202002: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV_EXT");
    case 1000202003: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_NV_EXT");
    case 1000328000: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_EXT");
    case 1000328001: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_EXT");
    case 1000386004: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_TRACE_RAYS2_EXT");
    case 2147483647: return sv("VK_INDIRECT_COMMANDS_TOKEN_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectCommandsLayoutUsageFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV");
    case 2: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV");
    case 4: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV");
    case 2147483647: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectCommandsLayoutUsageFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_EXT");
    case 2: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_EXT");
    case 2147483647: return sv("VK_INDIRECT_COMMANDS_LAYOUT_USAGE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndirectCommandsInputModeFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_INDIRECT_COMMANDS_INPUT_MODE_VULKAN_INDEX_BUFFER_EXT");
    case 2: return sv("VK_INDIRECT_COMMANDS_INPUT_MODE_DXGI_INDEX_BUFFER_EXT");
    case 2147483647: return sv("VK_INDIRECT_COMMANDS_INPUT_MODE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkIndexType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_INDEX_TYPE_UINT16");
    case 1: return sv("VK_INDEX_TYPE_UINT32");
    case 1000265000: return sv("VK_INDEX_TYPE_UINT8");
    case 1000165000: return sv("VK_INDEX_TYPE_NONE_KHR");
    // case 1000165000: return sv("VK_INDEX_TYPE_NONE_NV"); // duplicate value
    // case 1000265000: return sv("VK_INDEX_TYPE_UINT8_EXT"); // duplicate value
    // case 1000265000: return sv("VK_INDEX_TYPE_UINT8_KHR"); // duplicate value
    case 2147483647: return sv("VK_INDEX_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageViewType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_VIEW_TYPE_1D");
    case 1: return sv("VK_IMAGE_VIEW_TYPE_2D");
    case 2: return sv("VK_IMAGE_VIEW_TYPE_3D");
    case 3: return sv("VK_IMAGE_VIEW_TYPE_CUBE");
    case 4: return sv("VK_IMAGE_VIEW_TYPE_1D_ARRAY");
    case 5: return sv("VK_IMAGE_VIEW_TYPE_2D_ARRAY");
    case 6: return sv("VK_IMAGE_VIEW_TYPE_CUBE_ARRAY");
    case 2147483647: return sv("VK_IMAGE_VIEW_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageViewCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT");
    case 4: return sv("VK_IMAGE_VIEW_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT");
    case 2: return sv("VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT");
    case 2147483647: return sv("VK_IMAGE_VIEW_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageUsageFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_IMAGE_USAGE_TRANSFER_SRC_BIT");
    case 2: return sv("VK_IMAGE_USAGE_TRANSFER_DST_BIT");
    case 4: return sv("VK_IMAGE_USAGE_SAMPLED_BIT");
    case 8: return sv("VK_IMAGE_USAGE_STORAGE_BIT");
    case 16: return sv("VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT");
    case 32: return sv("VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT");
    case 64: return sv("VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT");
    case 128: return sv("VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT");
    case 4194304: return sv("VK_IMAGE_USAGE_HOST_TRANSFER_BIT");
    case 1024: return sv("VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR");
    case 2048: return sv("VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR");
    case 4096: return sv("VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR");
    case 512: return sv("VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT");
    case 256: return sv("VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    case 8192: return sv("VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR");
    case 16384: return sv("VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR");
    case 32768: return sv("VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR");
    case 524288: return sv("VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT");
    case 262144: return sv("VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI");
    case 1048576: return sv("VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM");
    case 2097152: return sv("VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM");
    case 8388608: return sv("VK_IMAGE_USAGE_TENSOR_ALIASING_BIT_ARM");
    case 134217728: return sv("VK_IMAGE_USAGE_TILE_MEMORY_BIT_QCOM");
    case 33554432: return sv("VK_IMAGE_USAGE_VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR");
    case 67108864: return sv("VK_IMAGE_USAGE_VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR");
    // case 256: return sv("VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV"); // duplicate value
    // case 4194304: return sv("VK_IMAGE_USAGE_HOST_TRANSFER_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_IMAGE_USAGE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_TYPE_1D");
    case 1: return sv("VK_IMAGE_TYPE_2D");
    case 2: return sv("VK_IMAGE_TYPE_3D");
    case 2147483647: return sv("VK_IMAGE_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageTiling(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_TILING_OPTIMAL");
    case 1: return sv("VK_IMAGE_TILING_LINEAR");
    case 1000158000: return sv("VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT");
    case 2147483647: return sv("VK_IMAGE_TILING_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageLayout(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_LAYOUT_UNDEFINED");
    case 1: return sv("VK_IMAGE_LAYOUT_GENERAL");
    case 2: return sv("VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL");
    case 3: return sv("VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL");
    case 4: return sv("VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL");
    case 5: return sv("VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL");
    case 6: return sv("VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL");
    case 7: return sv("VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL");
    case 8: return sv("VK_IMAGE_LAYOUT_PREINITIALIZED");
    case 1000117000: return sv("VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL");
    case 1000117001: return sv("VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL");
    case 1000241000: return sv("VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL");
    case 1000241001: return sv("VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL");
    case 1000241002: return sv("VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL");
    case 1000241003: return sv("VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL");
    case 1000314000: return sv("VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL");
    case 1000314001: return sv("VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL");
    case 1000232000: return sv("VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ");
    case 1000001002: return sv("VK_IMAGE_LAYOUT_PRESENT_SRC_KHR");
    case 1000024000: return sv("VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR");
    case 1000024001: return sv("VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR");
    case 1000024002: return sv("VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR");
    case 1000111000: return sv("VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR");
    case 1000218000: return sv("VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT");
    case 1000164003: return sv("VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR");
    case 1000299000: return sv("VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR");
    case 1000299001: return sv("VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR");
    case 1000299002: return sv("VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR");
    case 1000339000: return sv("VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT");
    case 1000460000: return sv("VK_IMAGE_LAYOUT_TENSOR_ALIASING_ARM");
    case 1000553000: return sv("VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR");
    case 1000620000: return sv("VK_IMAGE_LAYOUT_ZERO_INITIALIZED_EXT");
    // case 1000117000: return sv("VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR"); // duplicate value
    // case 1000117001: return sv("VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR"); // duplicate value
    // case 1000164003: return sv("VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV"); // duplicate value
    // case 1000232000: return sv("VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ_KHR"); // duplicate value
    // case 1000241000: return sv("VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR"); // duplicate value
    // case 1000241001: return sv("VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR"); // duplicate value
    // case 1000241002: return sv("VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR"); // duplicate value
    // case 1000241003: return sv("VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR"); // duplicate value
    // case 1000314000: return sv("VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL_KHR"); // duplicate value
    // case 1000314001: return sv("VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL_KHR"); // duplicate value
    case 2147483647: return sv("VK_IMAGE_LAYOUT_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_IMAGE_CREATE_SPARSE_BINDING_BIT");
    case 2: return sv("VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT");
    case 4: return sv("VK_IMAGE_CREATE_SPARSE_ALIASED_BIT");
    case 8: return sv("VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT");
    case 16: return sv("VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT");
    case 1024: return sv("VK_IMAGE_CREATE_ALIAS_BIT");
    case 64: return sv("VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT");
    case 32: return sv("VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT");
    case 128: return sv("VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT");
    case 256: return sv("VK_IMAGE_CREATE_EXTENDED_USAGE_BIT");
    case 2048: return sv("VK_IMAGE_CREATE_PROTECTED_BIT");
    case 512: return sv("VK_IMAGE_CREATE_DISJOINT_BIT");
    case 8192: return sv("VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV");
    case 65536: return sv("VK_IMAGE_CREATE_DESCRIPTOR_HEAP_CAPTURE_REPLAY_BIT_EXT");
    case 4096: return sv("VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT");
    case 16384: return sv("VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT");
    case 262144: return sv("VK_IMAGE_CREATE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT");
    case 131072: return sv("VK_IMAGE_CREATE_2D_VIEW_COMPATIBLE_BIT_EXT");
    case 1048576: return sv("VK_IMAGE_CREATE_VIDEO_PROFILE_INDEPENDENT_BIT_KHR");
    case 32768: return sv("VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_EXT");
    // case 64: return sv("VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR"); // duplicate value
    // case 32: return sv("VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR"); // duplicate value
    // case 128: return sv("VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR"); // duplicate value
    // case 256: return sv("VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR"); // duplicate value
    // case 512: return sv("VK_IMAGE_CREATE_DISJOINT_BIT_KHR"); // duplicate value
    // case 1024: return sv("VK_IMAGE_CREATE_ALIAS_BIT_KHR"); // duplicate value
    // case 65536: return sv("VK_IMAGE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT"); // duplicate value
    // case 32768: return sv("VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM"); // duplicate value
    case 2147483647: return sv("VK_IMAGE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageCompressionFlagBitsEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_COMPRESSION_DEFAULT_EXT");
    case 1: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_DEFAULT_EXT");
    case 2: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_EXPLICIT_EXT");
    case 4: return sv("VK_IMAGE_COMPRESSION_DISABLED_EXT");
    case 2147483647: return sv("VK_IMAGE_COMPRESSION_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageCompressionFixedRateFlagBitsEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_NONE_EXT");
    case 1: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_1BPC_BIT_EXT");
    case 2: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_2BPC_BIT_EXT");
    case 4: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_3BPC_BIT_EXT");
    case 8: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_4BPC_BIT_EXT");
    case 16: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_5BPC_BIT_EXT");
    case 32: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_6BPC_BIT_EXT");
    case 64: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_7BPC_BIT_EXT");
    case 128: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_8BPC_BIT_EXT");
    case 256: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_9BPC_BIT_EXT");
    case 512: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_10BPC_BIT_EXT");
    case 1024: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_11BPC_BIT_EXT");
    case 2048: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_12BPC_BIT_EXT");
    case 4096: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_13BPC_BIT_EXT");
    case 8192: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_14BPC_BIT_EXT");
    case 16384: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_15BPC_BIT_EXT");
    case 32768: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_16BPC_BIT_EXT");
    case 65536: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_17BPC_BIT_EXT");
    case 131072: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_18BPC_BIT_EXT");
    case 262144: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_19BPC_BIT_EXT");
    case 524288: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_20BPC_BIT_EXT");
    case 1048576: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_21BPC_BIT_EXT");
    case 2097152: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_22BPC_BIT_EXT");
    case 4194304: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_23BPC_BIT_EXT");
    case 8388608: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_24BPC_BIT_EXT");
    case 2147483647: return sv("VK_IMAGE_COMPRESSION_FIXED_RATE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkImageAspectFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_IMAGE_ASPECT_COLOR_BIT");
    case 2: return sv("VK_IMAGE_ASPECT_DEPTH_BIT");
    case 4: return sv("VK_IMAGE_ASPECT_STENCIL_BIT");
    case 8: return sv("VK_IMAGE_ASPECT_METADATA_BIT");
    case 16: return sv("VK_IMAGE_ASPECT_PLANE_0_BIT");
    case 32: return sv("VK_IMAGE_ASPECT_PLANE_1_BIT");
    case 64: return sv("VK_IMAGE_ASPECT_PLANE_2_BIT");
    case 0: return sv("VK_IMAGE_ASPECT_NONE");
    case 128: return sv("VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT");
    case 256: return sv("VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT");
    case 512: return sv("VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT");
    case 1024: return sv("VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT");
    // case 16: return sv("VK_IMAGE_ASPECT_PLANE_0_BIT_KHR"); // duplicate value
    // case 32: return sv("VK_IMAGE_ASPECT_PLANE_1_BIT_KHR"); // duplicate value
    // case 64: return sv("VK_IMAGE_ASPECT_PLANE_2_BIT_KHR"); // duplicate value
    // case 0: return sv("VK_IMAGE_ASPECT_NONE_KHR"); // duplicate value
    case 2147483647: return sv("VK_IMAGE_ASPECT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkHostImageCopyFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_HOST_IMAGE_COPY_MEMCPY_BIT");
    // case 1: return sv("VK_HOST_IMAGE_COPY_MEMCPY"); // duplicate value
    // case 1: return sv("VK_HOST_IMAGE_COPY_MEMCPY_BIT_EXT"); // duplicate value
    // case 1: return sv("VK_HOST_IMAGE_COPY_MEMCPY_EXT"); // duplicate value
    case 2147483647: return sv("VK_HOST_IMAGE_COPY_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkGraphicsPipelineLibraryFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT");
    case 2: return sv("VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT");
    case 4: return sv("VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT");
    case 8: return sv("VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT");
    case 2147483647: return sv("VK_GRAPHICS_PIPELINE_LIBRARY_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkGeometryTypeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_GEOMETRY_TYPE_TRIANGLES_KHR");
    case 1: return sv("VK_GEOMETRY_TYPE_AABBS_KHR");
    case 2: return sv("VK_GEOMETRY_TYPE_INSTANCES_KHR");
    case 1000429004: return sv("VK_GEOMETRY_TYPE_SPHERES_NV");
    case 1000429005: return sv("VK_GEOMETRY_TYPE_LINEAR_SWEPT_SPHERES_NV");
    // case 0: return sv("VK_GEOMETRY_TYPE_TRIANGLES_NV"); // duplicate value
    // case 1: return sv("VK_GEOMETRY_TYPE_AABBS_NV"); // duplicate value
    case 2147483647: return sv("VK_GEOMETRY_TYPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkGeometryInstanceFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR");
    case 2: return sv("VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR");
    case 4: return sv("VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR");
    case 8: return sv("VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR");
    case 16: return sv("VK_GEOMETRY_INSTANCE_FORCE_OPACITY_MICROMAP_2_STATE_BIT_EXT");
    case 32: return sv("VK_GEOMETRY_INSTANCE_DISABLE_OPACITY_MICROMAPS_BIT_EXT");
    // case 2: return sv("VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR"); // duplicate value
    // case 1: return sv("VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV"); // duplicate value
    // case 2: return sv("VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV"); // duplicate value
    // case 4: return sv("VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV"); // duplicate value
    // case 8: return sv("VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV"); // duplicate value
    // case 16: return sv("VK_GEOMETRY_INSTANCE_FORCE_OPACITY_MICROMAP_2_STATE_EXT"); // duplicate value
    // case 32: return sv("VK_GEOMETRY_INSTANCE_DISABLE_OPACITY_MICROMAPS_EXT"); // duplicate value
    case 2147483647: return sv("VK_GEOMETRY_INSTANCE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkGeometryFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_GEOMETRY_OPAQUE_BIT_KHR");
    case 2: return sv("VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR");
    // case 1: return sv("VK_GEOMETRY_OPAQUE_BIT_NV"); // duplicate value
    // case 2: return sv("VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV"); // duplicate value
    case 2147483647: return sv("VK_GEOMETRY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFrontFace(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FRONT_FACE_COUNTER_CLOCKWISE");
    case 1: return sv("VK_FRONT_FACE_CLOCKWISE");
    case 2147483647: return sv("VK_FRONT_FACE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFramebufferCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT");
    // case 1: return sv("VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_FRAMEBUFFER_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFrameBoundaryFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_FRAME_BOUNDARY_FRAME_END_BIT_EXT");
    case 2147483647: return sv("VK_FRAME_BOUNDARY_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFragmentShadingRateTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV");
    case 1: return sv("VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV");
    case 2147483647: return sv("VK_FRAGMENT_SHADING_RATE_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFragmentShadingRateNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV");
    case 1: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV");
    case 4: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV");
    case 5: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV");
    case 6: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV");
    case 9: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV");
    case 10: return sv("VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV");
    case 11: return sv("VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV");
    case 12: return sv("VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV");
    case 13: return sv("VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV");
    case 14: return sv("VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV");
    case 15: return sv("VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV");
    case 2147483647: return sv("VK_FRAGMENT_SHADING_RATE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFragmentShadingRateCombinerOpKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR");
    case 1: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR");
    case 2: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR");
    case 3: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR");
    case 4: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR");
    case 2147483647: return sv("VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFormatFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT");
    case 2: return sv("VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT");
    case 4: return sv("VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT");
    case 8: return sv("VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT");
    case 16: return sv("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT");
    case 32: return sv("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT");
    case 64: return sv("VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT");
    case 128: return sv("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT");
    case 256: return sv("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT");
    case 512: return sv("VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT");
    case 1024: return sv("VK_FORMAT_FEATURE_BLIT_SRC_BIT");
    case 2048: return sv("VK_FORMAT_FEATURE_BLIT_DST_BIT");
    case 4096: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT");
    case 16384: return sv("VK_FORMAT_FEATURE_TRANSFER_SRC_BIT");
    case 32768: return sv("VK_FORMAT_FEATURE_TRANSFER_DST_BIT");
    case 131072: return sv("VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT");
    case 262144: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT");
    case 524288: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT");
    case 1048576: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT");
    case 2097152: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT");
    case 4194304: return sv("VK_FORMAT_FEATURE_DISJOINT_BIT");
    case 8388608: return sv("VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT");
    case 65536: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT");
    case 33554432: return sv("VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR");
    case 67108864: return sv("VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR");
    case 536870912: return sv("VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR");
    case 8192: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT");
    case 16777216: return sv("VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT");
    case 1073741824: return sv("VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR");
    case 134217728: return sv("VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR");
    case 268435456: return sv("VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR");
    // case 8192: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG"); // duplicate value
    // case 16384: return sv("VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR"); // duplicate value
    // case 32768: return sv("VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR"); // duplicate value
    // case 65536: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT"); // duplicate value
    // case 131072: return sv("VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR"); // duplicate value
    // case 262144: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR"); // duplicate value
    // case 524288: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR"); // duplicate value
    // case 1048576: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR"); // duplicate value
    // case 2097152: return sv("VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR"); // duplicate value
    // case 4194304: return sv("VK_FORMAT_FEATURE_DISJOINT_BIT_KHR"); // duplicate value
    // case 8388608: return sv("VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_FORMAT_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFormat(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FORMAT_UNDEFINED");
    case 1: return sv("VK_FORMAT_R4G4_UNORM_PACK8");
    case 2: return sv("VK_FORMAT_R4G4B4A4_UNORM_PACK16");
    case 3: return sv("VK_FORMAT_B4G4R4A4_UNORM_PACK16");
    case 4: return sv("VK_FORMAT_R5G6B5_UNORM_PACK16");
    case 5: return sv("VK_FORMAT_B5G6R5_UNORM_PACK16");
    case 6: return sv("VK_FORMAT_R5G5B5A1_UNORM_PACK16");
    case 7: return sv("VK_FORMAT_B5G5R5A1_UNORM_PACK16");
    case 8: return sv("VK_FORMAT_A1R5G5B5_UNORM_PACK16");
    case 9: return sv("VK_FORMAT_R8_UNORM");
    case 10: return sv("VK_FORMAT_R8_SNORM");
    case 11: return sv("VK_FORMAT_R8_USCALED");
    case 12: return sv("VK_FORMAT_R8_SSCALED");
    case 13: return sv("VK_FORMAT_R8_UINT");
    case 14: return sv("VK_FORMAT_R8_SINT");
    case 15: return sv("VK_FORMAT_R8_SRGB");
    case 16: return sv("VK_FORMAT_R8G8_UNORM");
    case 17: return sv("VK_FORMAT_R8G8_SNORM");
    case 18: return sv("VK_FORMAT_R8G8_USCALED");
    case 19: return sv("VK_FORMAT_R8G8_SSCALED");
    case 20: return sv("VK_FORMAT_R8G8_UINT");
    case 21: return sv("VK_FORMAT_R8G8_SINT");
    case 22: return sv("VK_FORMAT_R8G8_SRGB");
    case 23: return sv("VK_FORMAT_R8G8B8_UNORM");
    case 24: return sv("VK_FORMAT_R8G8B8_SNORM");
    case 25: return sv("VK_FORMAT_R8G8B8_USCALED");
    case 26: return sv("VK_FORMAT_R8G8B8_SSCALED");
    case 27: return sv("VK_FORMAT_R8G8B8_UINT");
    case 28: return sv("VK_FORMAT_R8G8B8_SINT");
    case 29: return sv("VK_FORMAT_R8G8B8_SRGB");
    case 30: return sv("VK_FORMAT_B8G8R8_UNORM");
    case 31: return sv("VK_FORMAT_B8G8R8_SNORM");
    case 32: return sv("VK_FORMAT_B8G8R8_USCALED");
    case 33: return sv("VK_FORMAT_B8G8R8_SSCALED");
    case 34: return sv("VK_FORMAT_B8G8R8_UINT");
    case 35: return sv("VK_FORMAT_B8G8R8_SINT");
    case 36: return sv("VK_FORMAT_B8G8R8_SRGB");
    case 37: return sv("VK_FORMAT_R8G8B8A8_UNORM");
    case 38: return sv("VK_FORMAT_R8G8B8A8_SNORM");
    case 39: return sv("VK_FORMAT_R8G8B8A8_USCALED");
    case 40: return sv("VK_FORMAT_R8G8B8A8_SSCALED");
    case 41: return sv("VK_FORMAT_R8G8B8A8_UINT");
    case 42: return sv("VK_FORMAT_R8G8B8A8_SINT");
    case 43: return sv("VK_FORMAT_R8G8B8A8_SRGB");
    case 44: return sv("VK_FORMAT_B8G8R8A8_UNORM");
    case 45: return sv("VK_FORMAT_B8G8R8A8_SNORM");
    case 46: return sv("VK_FORMAT_B8G8R8A8_USCALED");
    case 47: return sv("VK_FORMAT_B8G8R8A8_SSCALED");
    case 48: return sv("VK_FORMAT_B8G8R8A8_UINT");
    case 49: return sv("VK_FORMAT_B8G8R8A8_SINT");
    case 50: return sv("VK_FORMAT_B8G8R8A8_SRGB");
    case 51: return sv("VK_FORMAT_A8B8G8R8_UNORM_PACK32");
    case 52: return sv("VK_FORMAT_A8B8G8R8_SNORM_PACK32");
    case 53: return sv("VK_FORMAT_A8B8G8R8_USCALED_PACK32");
    case 54: return sv("VK_FORMAT_A8B8G8R8_SSCALED_PACK32");
    case 55: return sv("VK_FORMAT_A8B8G8R8_UINT_PACK32");
    case 56: return sv("VK_FORMAT_A8B8G8R8_SINT_PACK32");
    case 57: return sv("VK_FORMAT_A8B8G8R8_SRGB_PACK32");
    case 58: return sv("VK_FORMAT_A2R10G10B10_UNORM_PACK32");
    case 59: return sv("VK_FORMAT_A2R10G10B10_SNORM_PACK32");
    case 60: return sv("VK_FORMAT_A2R10G10B10_USCALED_PACK32");
    case 61: return sv("VK_FORMAT_A2R10G10B10_SSCALED_PACK32");
    case 62: return sv("VK_FORMAT_A2R10G10B10_UINT_PACK32");
    case 63: return sv("VK_FORMAT_A2R10G10B10_SINT_PACK32");
    case 64: return sv("VK_FORMAT_A2B10G10R10_UNORM_PACK32");
    case 65: return sv("VK_FORMAT_A2B10G10R10_SNORM_PACK32");
    case 66: return sv("VK_FORMAT_A2B10G10R10_USCALED_PACK32");
    case 67: return sv("VK_FORMAT_A2B10G10R10_SSCALED_PACK32");
    case 68: return sv("VK_FORMAT_A2B10G10R10_UINT_PACK32");
    case 69: return sv("VK_FORMAT_A2B10G10R10_SINT_PACK32");
    case 70: return sv("VK_FORMAT_R16_UNORM");
    case 71: return sv("VK_FORMAT_R16_SNORM");
    case 72: return sv("VK_FORMAT_R16_USCALED");
    case 73: return sv("VK_FORMAT_R16_SSCALED");
    case 74: return sv("VK_FORMAT_R16_UINT");
    case 75: return sv("VK_FORMAT_R16_SINT");
    case 76: return sv("VK_FORMAT_R16_SFLOAT");
    case 77: return sv("VK_FORMAT_R16G16_UNORM");
    case 78: return sv("VK_FORMAT_R16G16_SNORM");
    case 79: return sv("VK_FORMAT_R16G16_USCALED");
    case 80: return sv("VK_FORMAT_R16G16_SSCALED");
    case 81: return sv("VK_FORMAT_R16G16_UINT");
    case 82: return sv("VK_FORMAT_R16G16_SINT");
    case 83: return sv("VK_FORMAT_R16G16_SFLOAT");
    case 84: return sv("VK_FORMAT_R16G16B16_UNORM");
    case 85: return sv("VK_FORMAT_R16G16B16_SNORM");
    case 86: return sv("VK_FORMAT_R16G16B16_USCALED");
    case 87: return sv("VK_FORMAT_R16G16B16_SSCALED");
    case 88: return sv("VK_FORMAT_R16G16B16_UINT");
    case 89: return sv("VK_FORMAT_R16G16B16_SINT");
    case 90: return sv("VK_FORMAT_R16G16B16_SFLOAT");
    case 91: return sv("VK_FORMAT_R16G16B16A16_UNORM");
    case 92: return sv("VK_FORMAT_R16G16B16A16_SNORM");
    case 93: return sv("VK_FORMAT_R16G16B16A16_USCALED");
    case 94: return sv("VK_FORMAT_R16G16B16A16_SSCALED");
    case 95: return sv("VK_FORMAT_R16G16B16A16_UINT");
    case 96: return sv("VK_FORMAT_R16G16B16A16_SINT");
    case 97: return sv("VK_FORMAT_R16G16B16A16_SFLOAT");
    case 98: return sv("VK_FORMAT_R32_UINT");
    case 99: return sv("VK_FORMAT_R32_SINT");
    case 100: return sv("VK_FORMAT_R32_SFLOAT");
    case 101: return sv("VK_FORMAT_R32G32_UINT");
    case 102: return sv("VK_FORMAT_R32G32_SINT");
    case 103: return sv("VK_FORMAT_R32G32_SFLOAT");
    case 104: return sv("VK_FORMAT_R32G32B32_UINT");
    case 105: return sv("VK_FORMAT_R32G32B32_SINT");
    case 106: return sv("VK_FORMAT_R32G32B32_SFLOAT");
    case 107: return sv("VK_FORMAT_R32G32B32A32_UINT");
    case 108: return sv("VK_FORMAT_R32G32B32A32_SINT");
    case 109: return sv("VK_FORMAT_R32G32B32A32_SFLOAT");
    case 110: return sv("VK_FORMAT_R64_UINT");
    case 111: return sv("VK_FORMAT_R64_SINT");
    case 112: return sv("VK_FORMAT_R64_SFLOAT");
    case 113: return sv("VK_FORMAT_R64G64_UINT");
    case 114: return sv("VK_FORMAT_R64G64_SINT");
    case 115: return sv("VK_FORMAT_R64G64_SFLOAT");
    case 116: return sv("VK_FORMAT_R64G64B64_UINT");
    case 117: return sv("VK_FORMAT_R64G64B64_SINT");
    case 118: return sv("VK_FORMAT_R64G64B64_SFLOAT");
    case 119: return sv("VK_FORMAT_R64G64B64A64_UINT");
    case 120: return sv("VK_FORMAT_R64G64B64A64_SINT");
    case 121: return sv("VK_FORMAT_R64G64B64A64_SFLOAT");
    case 122: return sv("VK_FORMAT_B10G11R11_UFLOAT_PACK32");
    case 123: return sv("VK_FORMAT_E5B9G9R9_UFLOAT_PACK32");
    case 124: return sv("VK_FORMAT_D16_UNORM");
    case 125: return sv("VK_FORMAT_X8_D24_UNORM_PACK32");
    case 126: return sv("VK_FORMAT_D32_SFLOAT");
    case 127: return sv("VK_FORMAT_S8_UINT");
    case 128: return sv("VK_FORMAT_D16_UNORM_S8_UINT");
    case 129: return sv("VK_FORMAT_D24_UNORM_S8_UINT");
    case 130: return sv("VK_FORMAT_D32_SFLOAT_S8_UINT");
    case 131: return sv("VK_FORMAT_BC1_RGB_UNORM_BLOCK");
    case 132: return sv("VK_FORMAT_BC1_RGB_SRGB_BLOCK");
    case 133: return sv("VK_FORMAT_BC1_RGBA_UNORM_BLOCK");
    case 134: return sv("VK_FORMAT_BC1_RGBA_SRGB_BLOCK");
    case 135: return sv("VK_FORMAT_BC2_UNORM_BLOCK");
    case 136: return sv("VK_FORMAT_BC2_SRGB_BLOCK");
    case 137: return sv("VK_FORMAT_BC3_UNORM_BLOCK");
    case 138: return sv("VK_FORMAT_BC3_SRGB_BLOCK");
    case 139: return sv("VK_FORMAT_BC4_UNORM_BLOCK");
    case 140: return sv("VK_FORMAT_BC4_SNORM_BLOCK");
    case 141: return sv("VK_FORMAT_BC5_UNORM_BLOCK");
    case 142: return sv("VK_FORMAT_BC5_SNORM_BLOCK");
    case 143: return sv("VK_FORMAT_BC6H_UFLOAT_BLOCK");
    case 144: return sv("VK_FORMAT_BC6H_SFLOAT_BLOCK");
    case 145: return sv("VK_FORMAT_BC7_UNORM_BLOCK");
    case 146: return sv("VK_FORMAT_BC7_SRGB_BLOCK");
    case 147: return sv("VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK");
    case 148: return sv("VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK");
    case 149: return sv("VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK");
    case 150: return sv("VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK");
    case 151: return sv("VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK");
    case 152: return sv("VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK");
    case 153: return sv("VK_FORMAT_EAC_R11_UNORM_BLOCK");
    case 154: return sv("VK_FORMAT_EAC_R11_SNORM_BLOCK");
    case 155: return sv("VK_FORMAT_EAC_R11G11_UNORM_BLOCK");
    case 156: return sv("VK_FORMAT_EAC_R11G11_SNORM_BLOCK");
    case 157: return sv("VK_FORMAT_ASTC_4x4_UNORM_BLOCK");
    case 158: return sv("VK_FORMAT_ASTC_4x4_SRGB_BLOCK");
    case 159: return sv("VK_FORMAT_ASTC_5x4_UNORM_BLOCK");
    case 160: return sv("VK_FORMAT_ASTC_5x4_SRGB_BLOCK");
    case 161: return sv("VK_FORMAT_ASTC_5x5_UNORM_BLOCK");
    case 162: return sv("VK_FORMAT_ASTC_5x5_SRGB_BLOCK");
    case 163: return sv("VK_FORMAT_ASTC_6x5_UNORM_BLOCK");
    case 164: return sv("VK_FORMAT_ASTC_6x5_SRGB_BLOCK");
    case 165: return sv("VK_FORMAT_ASTC_6x6_UNORM_BLOCK");
    case 166: return sv("VK_FORMAT_ASTC_6x6_SRGB_BLOCK");
    case 167: return sv("VK_FORMAT_ASTC_8x5_UNORM_BLOCK");
    case 168: return sv("VK_FORMAT_ASTC_8x5_SRGB_BLOCK");
    case 169: return sv("VK_FORMAT_ASTC_8x6_UNORM_BLOCK");
    case 170: return sv("VK_FORMAT_ASTC_8x6_SRGB_BLOCK");
    case 171: return sv("VK_FORMAT_ASTC_8x8_UNORM_BLOCK");
    case 172: return sv("VK_FORMAT_ASTC_8x8_SRGB_BLOCK");
    case 173: return sv("VK_FORMAT_ASTC_10x5_UNORM_BLOCK");
    case 174: return sv("VK_FORMAT_ASTC_10x5_SRGB_BLOCK");
    case 175: return sv("VK_FORMAT_ASTC_10x6_UNORM_BLOCK");
    case 176: return sv("VK_FORMAT_ASTC_10x6_SRGB_BLOCK");
    case 177: return sv("VK_FORMAT_ASTC_10x8_UNORM_BLOCK");
    case 178: return sv("VK_FORMAT_ASTC_10x8_SRGB_BLOCK");
    case 179: return sv("VK_FORMAT_ASTC_10x10_UNORM_BLOCK");
    case 180: return sv("VK_FORMAT_ASTC_10x10_SRGB_BLOCK");
    case 181: return sv("VK_FORMAT_ASTC_12x10_UNORM_BLOCK");
    case 182: return sv("VK_FORMAT_ASTC_12x10_SRGB_BLOCK");
    case 183: return sv("VK_FORMAT_ASTC_12x12_UNORM_BLOCK");
    case 184: return sv("VK_FORMAT_ASTC_12x12_SRGB_BLOCK");
    case 1000156000: return sv("VK_FORMAT_G8B8G8R8_422_UNORM");
    case 1000156001: return sv("VK_FORMAT_B8G8R8G8_422_UNORM");
    case 1000156002: return sv("VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM");
    case 1000156003: return sv("VK_FORMAT_G8_B8R8_2PLANE_420_UNORM");
    case 1000156004: return sv("VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM");
    case 1000156005: return sv("VK_FORMAT_G8_B8R8_2PLANE_422_UNORM");
    case 1000156006: return sv("VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM");
    case 1000156007: return sv("VK_FORMAT_R10X6_UNORM_PACK16");
    case 1000156008: return sv("VK_FORMAT_R10X6G10X6_UNORM_2PACK16");
    case 1000156009: return sv("VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16");
    case 1000156010: return sv("VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16");
    case 1000156011: return sv("VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16");
    case 1000156012: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16");
    case 1000156013: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16");
    case 1000156014: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16");
    case 1000156015: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16");
    case 1000156016: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16");
    case 1000156017: return sv("VK_FORMAT_R12X4_UNORM_PACK16");
    case 1000156018: return sv("VK_FORMAT_R12X4G12X4_UNORM_2PACK16");
    case 1000156019: return sv("VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16");
    case 1000156020: return sv("VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16");
    case 1000156021: return sv("VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16");
    case 1000156022: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16");
    case 1000156023: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16");
    case 1000156024: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16");
    case 1000156025: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16");
    case 1000156026: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16");
    case 1000156027: return sv("VK_FORMAT_G16B16G16R16_422_UNORM");
    case 1000156028: return sv("VK_FORMAT_B16G16R16G16_422_UNORM");
    case 1000156029: return sv("VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM");
    case 1000156030: return sv("VK_FORMAT_G16_B16R16_2PLANE_420_UNORM");
    case 1000156031: return sv("VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM");
    case 1000156032: return sv("VK_FORMAT_G16_B16R16_2PLANE_422_UNORM");
    case 1000156033: return sv("VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM");
    case 1000330000: return sv("VK_FORMAT_G8_B8R8_2PLANE_444_UNORM");
    case 1000330001: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16");
    case 1000330002: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16");
    case 1000330003: return sv("VK_FORMAT_G16_B16R16_2PLANE_444_UNORM");
    case 1000340000: return sv("VK_FORMAT_A4R4G4B4_UNORM_PACK16");
    case 1000340001: return sv("VK_FORMAT_A4B4G4R4_UNORM_PACK16");
    case 1000066000: return sv("VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK");
    case 1000066001: return sv("VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK");
    case 1000066002: return sv("VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK");
    case 1000066003: return sv("VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK");
    case 1000066004: return sv("VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK");
    case 1000066005: return sv("VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK");
    case 1000066006: return sv("VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK");
    case 1000066007: return sv("VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK");
    case 1000066008: return sv("VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK");
    case 1000066009: return sv("VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK");
    case 1000066010: return sv("VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK");
    case 1000066011: return sv("VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK");
    case 1000066012: return sv("VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK");
    case 1000066013: return sv("VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK");
    case 1000470000: return sv("VK_FORMAT_A1B5G5R5_UNORM_PACK16");
    case 1000470001: return sv("VK_FORMAT_A8_UNORM");
    case 1000054000: return sv("VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG");
    case 1000054001: return sv("VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG");
    case 1000054002: return sv("VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG");
    case 1000054003: return sv("VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG");
    case 1000054004: return sv("VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG");
    case 1000054005: return sv("VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG");
    case 1000054006: return sv("VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG");
    case 1000054007: return sv("VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG");
    case 1000288000: return sv("VK_FORMAT_ASTC_3x3x3_UNORM_BLOCK_EXT");
    case 1000288001: return sv("VK_FORMAT_ASTC_3x3x3_SRGB_BLOCK_EXT");
    case 1000288002: return sv("VK_FORMAT_ASTC_3x3x3_SFLOAT_BLOCK_EXT");
    case 1000288003: return sv("VK_FORMAT_ASTC_4x3x3_UNORM_BLOCK_EXT");
    case 1000288004: return sv("VK_FORMAT_ASTC_4x3x3_SRGB_BLOCK_EXT");
    case 1000288005: return sv("VK_FORMAT_ASTC_4x3x3_SFLOAT_BLOCK_EXT");
    case 1000288006: return sv("VK_FORMAT_ASTC_4x4x3_UNORM_BLOCK_EXT");
    case 1000288007: return sv("VK_FORMAT_ASTC_4x4x3_SRGB_BLOCK_EXT");
    case 1000288008: return sv("VK_FORMAT_ASTC_4x4x3_SFLOAT_BLOCK_EXT");
    case 1000288009: return sv("VK_FORMAT_ASTC_4x4x4_UNORM_BLOCK_EXT");
    case 1000288010: return sv("VK_FORMAT_ASTC_4x4x4_SRGB_BLOCK_EXT");
    case 1000288011: return sv("VK_FORMAT_ASTC_4x4x4_SFLOAT_BLOCK_EXT");
    case 1000288012: return sv("VK_FORMAT_ASTC_5x4x4_UNORM_BLOCK_EXT");
    case 1000288013: return sv("VK_FORMAT_ASTC_5x4x4_SRGB_BLOCK_EXT");
    case 1000288014: return sv("VK_FORMAT_ASTC_5x4x4_SFLOAT_BLOCK_EXT");
    case 1000288015: return sv("VK_FORMAT_ASTC_5x5x4_UNORM_BLOCK_EXT");
    case 1000288016: return sv("VK_FORMAT_ASTC_5x5x4_SRGB_BLOCK_EXT");
    case 1000288017: return sv("VK_FORMAT_ASTC_5x5x4_SFLOAT_BLOCK_EXT");
    case 1000288018: return sv("VK_FORMAT_ASTC_5x5x5_UNORM_BLOCK_EXT");
    case 1000288019: return sv("VK_FORMAT_ASTC_5x5x5_SRGB_BLOCK_EXT");
    case 1000288020: return sv("VK_FORMAT_ASTC_5x5x5_SFLOAT_BLOCK_EXT");
    case 1000288021: return sv("VK_FORMAT_ASTC_6x5x5_UNORM_BLOCK_EXT");
    case 1000288022: return sv("VK_FORMAT_ASTC_6x5x5_SRGB_BLOCK_EXT");
    case 1000288023: return sv("VK_FORMAT_ASTC_6x5x5_SFLOAT_BLOCK_EXT");
    case 1000288024: return sv("VK_FORMAT_ASTC_6x6x5_UNORM_BLOCK_EXT");
    case 1000288025: return sv("VK_FORMAT_ASTC_6x6x5_SRGB_BLOCK_EXT");
    case 1000288026: return sv("VK_FORMAT_ASTC_6x6x5_SFLOAT_BLOCK_EXT");
    case 1000288027: return sv("VK_FORMAT_ASTC_6x6x6_UNORM_BLOCK_EXT");
    case 1000288028: return sv("VK_FORMAT_ASTC_6x6x6_SRGB_BLOCK_EXT");
    case 1000288029: return sv("VK_FORMAT_ASTC_6x6x6_SFLOAT_BLOCK_EXT");
    case 1000460000: return sv("VK_FORMAT_R8_BOOL_ARM");
    case 1000464000: return sv("VK_FORMAT_R16G16_SFIXED5_NV");
    case 1000609000: return sv("VK_FORMAT_R10X6_UINT_PACK16_ARM");
    case 1000609001: return sv("VK_FORMAT_R10X6G10X6_UINT_2PACK16_ARM");
    case 1000609002: return sv("VK_FORMAT_R10X6G10X6B10X6A10X6_UINT_4PACK16_ARM");
    case 1000609003: return sv("VK_FORMAT_R12X4_UINT_PACK16_ARM");
    case 1000609004: return sv("VK_FORMAT_R12X4G12X4_UINT_2PACK16_ARM");
    case 1000609005: return sv("VK_FORMAT_R12X4G12X4B12X4A12X4_UINT_4PACK16_ARM");
    case 1000609006: return sv("VK_FORMAT_R14X2_UINT_PACK16_ARM");
    case 1000609007: return sv("VK_FORMAT_R14X2G14X2_UINT_2PACK16_ARM");
    case 1000609008: return sv("VK_FORMAT_R14X2G14X2B14X2A14X2_UINT_4PACK16_ARM");
    case 1000609009: return sv("VK_FORMAT_R14X2_UNORM_PACK16_ARM");
    case 1000609010: return sv("VK_FORMAT_R14X2G14X2_UNORM_2PACK16_ARM");
    case 1000609011: return sv("VK_FORMAT_R14X2G14X2B14X2A14X2_UNORM_4PACK16_ARM");
    case 1000609012: return sv("VK_FORMAT_G14X2_B14X2R14X2_2PLANE_420_UNORM_3PACK16_ARM");
    case 1000609013: return sv("VK_FORMAT_G14X2_B14X2R14X2_2PLANE_422_UNORM_3PACK16_ARM");
    // case 1000066000: return sv("VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066001: return sv("VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066002: return sv("VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066003: return sv("VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066004: return sv("VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066005: return sv("VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066006: return sv("VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066007: return sv("VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066008: return sv("VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066009: return sv("VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066010: return sv("VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066011: return sv("VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066012: return sv("VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000066013: return sv("VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT"); // duplicate value
    // case 1000156000: return sv("VK_FORMAT_G8B8G8R8_422_UNORM_KHR"); // duplicate value
    // case 1000156001: return sv("VK_FORMAT_B8G8R8G8_422_UNORM_KHR"); // duplicate value
    // case 1000156002: return sv("VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR"); // duplicate value
    // case 1000156003: return sv("VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR"); // duplicate value
    // case 1000156004: return sv("VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR"); // duplicate value
    // case 1000156005: return sv("VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR"); // duplicate value
    // case 1000156006: return sv("VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR"); // duplicate value
    // case 1000156007: return sv("VK_FORMAT_R10X6_UNORM_PACK16_KHR"); // duplicate value
    // case 1000156008: return sv("VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR"); // duplicate value
    // case 1000156009: return sv("VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156010: return sv("VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156011: return sv("VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156012: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156013: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156014: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156015: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156016: return sv("VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156017: return sv("VK_FORMAT_R12X4_UNORM_PACK16_KHR"); // duplicate value
    // case 1000156018: return sv("VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR"); // duplicate value
    // case 1000156019: return sv("VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156020: return sv("VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156021: return sv("VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR"); // duplicate value
    // case 1000156022: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156023: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156024: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156025: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156026: return sv("VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR"); // duplicate value
    // case 1000156027: return sv("VK_FORMAT_G16B16G16R16_422_UNORM_KHR"); // duplicate value
    // case 1000156028: return sv("VK_FORMAT_B16G16R16G16_422_UNORM_KHR"); // duplicate value
    // case 1000156029: return sv("VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR"); // duplicate value
    // case 1000156030: return sv("VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR"); // duplicate value
    // case 1000156031: return sv("VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR"); // duplicate value
    // case 1000156032: return sv("VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR"); // duplicate value
    // case 1000156033: return sv("VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR"); // duplicate value
    // case 1000330000: return sv("VK_FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT"); // duplicate value
    // case 1000330001: return sv("VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT"); // duplicate value
    // case 1000330002: return sv("VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT"); // duplicate value
    // case 1000330003: return sv("VK_FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT"); // duplicate value
    // case 1000340000: return sv("VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT"); // duplicate value
    // case 1000340001: return sv("VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT"); // duplicate value
    // case 1000464000: return sv("VK_FORMAT_R16G16_S10_5_NV"); // duplicate value
    // case 1000470000: return sv("VK_FORMAT_A1B5G5R5_UNORM_PACK16_KHR"); // duplicate value
    // case 1000470001: return sv("VK_FORMAT_A8_UNORM_KHR"); // duplicate value
    case 2147483647: return sv("VK_FORMAT_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFilter(int64_t value) {
    switch (value) {
    case 0: return sv("VK_FILTER_NEAREST");
    case 1: return sv("VK_FILTER_LINEAR");
    case 1000015000: return sv("VK_FILTER_CUBIC_EXT");
    // case 1000015000: return sv("VK_FILTER_CUBIC_IMG"); // duplicate value
    case 2147483647: return sv("VK_FILTER_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFenceImportFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_FENCE_IMPORT_TEMPORARY_BIT");
    // case 1: return sv("VK_FENCE_IMPORT_TEMPORARY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_FENCE_IMPORT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkFenceCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_FENCE_CREATE_SIGNALED_BIT");
    case 2147483647: return sv("VK_FENCE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalSemaphoreHandleTypeFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT");
    case 2: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
    case 4: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
    case 8: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT");
    case 16: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT");
    case 128: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA");
    // case 8: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D11_FENCE_BIT"); // duplicate value
    // case 1: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR"); // duplicate value
    // case 8: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalSemaphoreFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT");
    case 2: return sv("VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT");
    // case 1: return sv("VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_SEMAPHORE_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalMemoryHandleTypeFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV");
    case 2: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV");
    case 4: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV");
    case 8: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV");
    case 2147483647: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalMemoryHandleTypeFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT");
    case 2: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT");
    case 4: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
    case 8: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT");
    case 16: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT");
    case 32: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT");
    case 64: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT");
    case 512: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT");
    case 1024: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID");
    case 128: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT");
    case 256: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT");
    case 2048: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA");
    case 4096: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV");
    case 32768: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OH_NATIVE_BUFFER_BIT_OHOS");
    case 16384: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCREEN_BUFFER_BIT_QNX");
    case 65536: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_MTLBUFFER_BIT_EXT");
    case 131072: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_MTLTEXTURE_BIT_EXT");
    case 262144: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_MTLHEAP_BIT_EXT");
    // case 1: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR"); // duplicate value
    // case 8: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR"); // duplicate value
    // case 16: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR"); // duplicate value
    // case 32: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR"); // duplicate value
    // case 64: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_MEMORY_HANDLE_TYPE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalMemoryFeatureFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV");
    case 2: return sv("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV");
    case 4: return sv("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV");
    case 2147483647: return sv("VK_EXTERNAL_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalMemoryFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT");
    case 2: return sv("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT");
    case 4: return sv("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT");
    // case 1: return sv("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_MEMORY_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalFenceHandleTypeFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT");
    case 2: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT");
    case 4: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT");
    case 8: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT");
    // case 1: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR"); // duplicate value
    // case 8: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_FENCE_HANDLE_TYPE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkExternalFenceFeatureFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT");
    case 2: return sv("VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT");
    // case 1: return sv("VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EXTERNAL_FENCE_FEATURE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkEventCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_EVENT_CREATE_DEVICE_ONLY_BIT");
    // case 1: return sv("VK_EVENT_CREATE_DEVICE_ONLY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_EVENT_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDynamicState(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DYNAMIC_STATE_VIEWPORT");
    case 1: return sv("VK_DYNAMIC_STATE_SCISSOR");
    case 2: return sv("VK_DYNAMIC_STATE_LINE_WIDTH");
    case 3: return sv("VK_DYNAMIC_STATE_DEPTH_BIAS");
    case 4: return sv("VK_DYNAMIC_STATE_BLEND_CONSTANTS");
    case 5: return sv("VK_DYNAMIC_STATE_DEPTH_BOUNDS");
    case 6: return sv("VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK");
    case 7: return sv("VK_DYNAMIC_STATE_STENCIL_WRITE_MASK");
    case 8: return sv("VK_DYNAMIC_STATE_STENCIL_REFERENCE");
    case 1000267000: return sv("VK_DYNAMIC_STATE_CULL_MODE");
    case 1000267001: return sv("VK_DYNAMIC_STATE_FRONT_FACE");
    case 1000267002: return sv("VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY");
    case 1000267003: return sv("VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT");
    case 1000267004: return sv("VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT");
    case 1000267005: return sv("VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE");
    case 1000267006: return sv("VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE");
    case 1000267007: return sv("VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE");
    case 1000267008: return sv("VK_DYNAMIC_STATE_DEPTH_COMPARE_OP");
    case 1000267009: return sv("VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE");
    case 1000267010: return sv("VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE");
    case 1000267011: return sv("VK_DYNAMIC_STATE_STENCIL_OP");
    case 1000377001: return sv("VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE");
    case 1000377002: return sv("VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE");
    case 1000377004: return sv("VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE");
    case 1000259000: return sv("VK_DYNAMIC_STATE_LINE_STIPPLE");
    case 1000087000: return sv("VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV");
    case 1000099000: return sv("VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT");
    case 1000099001: return sv("VK_DYNAMIC_STATE_DISCARD_RECTANGLE_ENABLE_EXT");
    case 1000099002: return sv("VK_DYNAMIC_STATE_DISCARD_RECTANGLE_MODE_EXT");
    case 1000143000: return sv("VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT");
    case 1000347000: return sv("VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR");
    case 1000164004: return sv("VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV");
    case 1000164006: return sv("VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV");
    case 1000205000: return sv("VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_ENABLE_NV");
    case 1000205001: return sv("VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV");
    case 1000226000: return sv("VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR");
    case 1000352000: return sv("VK_DYNAMIC_STATE_VERTEX_INPUT_EXT");
    case 1000377000: return sv("VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT");
    case 1000377003: return sv("VK_DYNAMIC_STATE_LOGIC_OP_EXT");
    case 1000381000: return sv("VK_DYNAMIC_STATE_COLOR_WRITE_ENABLE_EXT");
    case 1000455003: return sv("VK_DYNAMIC_STATE_DEPTH_CLAMP_ENABLE_EXT");
    case 1000455004: return sv("VK_DYNAMIC_STATE_POLYGON_MODE_EXT");
    case 1000455005: return sv("VK_DYNAMIC_STATE_RASTERIZATION_SAMPLES_EXT");
    case 1000455006: return sv("VK_DYNAMIC_STATE_SAMPLE_MASK_EXT");
    case 1000455007: return sv("VK_DYNAMIC_STATE_ALPHA_TO_COVERAGE_ENABLE_EXT");
    case 1000455008: return sv("VK_DYNAMIC_STATE_ALPHA_TO_ONE_ENABLE_EXT");
    case 1000455009: return sv("VK_DYNAMIC_STATE_LOGIC_OP_ENABLE_EXT");
    case 1000455010: return sv("VK_DYNAMIC_STATE_COLOR_BLEND_ENABLE_EXT");
    case 1000455011: return sv("VK_DYNAMIC_STATE_COLOR_BLEND_EQUATION_EXT");
    case 1000455012: return sv("VK_DYNAMIC_STATE_COLOR_WRITE_MASK_EXT");
    case 1000455002: return sv("VK_DYNAMIC_STATE_TESSELLATION_DOMAIN_ORIGIN_EXT");
    case 1000455013: return sv("VK_DYNAMIC_STATE_RASTERIZATION_STREAM_EXT");
    case 1000455014: return sv("VK_DYNAMIC_STATE_CONSERVATIVE_RASTERIZATION_MODE_EXT");
    case 1000455015: return sv("VK_DYNAMIC_STATE_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT");
    case 1000455016: return sv("VK_DYNAMIC_STATE_DEPTH_CLIP_ENABLE_EXT");
    case 1000455017: return sv("VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_ENABLE_EXT");
    case 1000455018: return sv("VK_DYNAMIC_STATE_COLOR_BLEND_ADVANCED_EXT");
    case 1000455019: return sv("VK_DYNAMIC_STATE_PROVOKING_VERTEX_MODE_EXT");
    case 1000455020: return sv("VK_DYNAMIC_STATE_LINE_RASTERIZATION_MODE_EXT");
    case 1000455021: return sv("VK_DYNAMIC_STATE_LINE_STIPPLE_ENABLE_EXT");
    case 1000455022: return sv("VK_DYNAMIC_STATE_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT");
    case 1000455023: return sv("VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_ENABLE_NV");
    case 1000455024: return sv("VK_DYNAMIC_STATE_VIEWPORT_SWIZZLE_NV");
    case 1000455025: return sv("VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_ENABLE_NV");
    case 1000455026: return sv("VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_LOCATION_NV");
    case 1000455027: return sv("VK_DYNAMIC_STATE_COVERAGE_MODULATION_MODE_NV");
    case 1000455028: return sv("VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_ENABLE_NV");
    case 1000455029: return sv("VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_NV");
    case 1000455030: return sv("VK_DYNAMIC_STATE_SHADING_RATE_IMAGE_ENABLE_NV");
    case 1000455031: return sv("VK_DYNAMIC_STATE_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV");
    case 1000455032: return sv("VK_DYNAMIC_STATE_COVERAGE_REDUCTION_MODE_NV");
    case 1000524000: return sv("VK_DYNAMIC_STATE_ATTACHMENT_FEEDBACK_LOOP_ENABLE_EXT");
    case 1000582000: return sv("VK_DYNAMIC_STATE_DEPTH_CLAMP_RANGE_EXT");
    // case 1000259000: return sv("VK_DYNAMIC_STATE_LINE_STIPPLE_EXT"); // duplicate value
    // case 1000267000: return sv("VK_DYNAMIC_STATE_CULL_MODE_EXT"); // duplicate value
    // case 1000267001: return sv("VK_DYNAMIC_STATE_FRONT_FACE_EXT"); // duplicate value
    // case 1000267002: return sv("VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY_EXT"); // duplicate value
    // case 1000267003: return sv("VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT_EXT"); // duplicate value
    // case 1000267004: return sv("VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT_EXT"); // duplicate value
    // case 1000267005: return sv("VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE_EXT"); // duplicate value
    // case 1000267006: return sv("VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT"); // duplicate value
    // case 1000267007: return sv("VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT"); // duplicate value
    // case 1000267008: return sv("VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT"); // duplicate value
    // case 1000267009: return sv("VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE_EXT"); // duplicate value
    // case 1000267010: return sv("VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT"); // duplicate value
    // case 1000267011: return sv("VK_DYNAMIC_STATE_STENCIL_OP_EXT"); // duplicate value
    // case 1000377001: return sv("VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT"); // duplicate value
    // case 1000377002: return sv("VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE_EXT"); // duplicate value
    // case 1000377004: return sv("VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE_EXT"); // duplicate value
    // case 1000259000: return sv("VK_DYNAMIC_STATE_LINE_STIPPLE_KHR"); // duplicate value
    case 2147483647: return sv("VK_DYNAMIC_STATE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDriverId(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DRIVER_ID_AMD_PROPRIETARY");
    case 2: return sv("VK_DRIVER_ID_AMD_OPEN_SOURCE");
    case 3: return sv("VK_DRIVER_ID_MESA_RADV");
    case 4: return sv("VK_DRIVER_ID_NVIDIA_PROPRIETARY");
    case 5: return sv("VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS");
    case 6: return sv("VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA");
    case 7: return sv("VK_DRIVER_ID_IMAGINATION_PROPRIETARY");
    case 8: return sv("VK_DRIVER_ID_QUALCOMM_PROPRIETARY");
    case 9: return sv("VK_DRIVER_ID_ARM_PROPRIETARY");
    case 10: return sv("VK_DRIVER_ID_GOOGLE_SWIFTSHADER");
    case 11: return sv("VK_DRIVER_ID_GGP_PROPRIETARY");
    case 12: return sv("VK_DRIVER_ID_BROADCOM_PROPRIETARY");
    case 13: return sv("VK_DRIVER_ID_MESA_LLVMPIPE");
    case 14: return sv("VK_DRIVER_ID_MOLTENVK");
    case 15: return sv("VK_DRIVER_ID_COREAVI_PROPRIETARY");
    case 16: return sv("VK_DRIVER_ID_JUICE_PROPRIETARY");
    case 17: return sv("VK_DRIVER_ID_VERISILICON_PROPRIETARY");
    case 18: return sv("VK_DRIVER_ID_MESA_TURNIP");
    case 19: return sv("VK_DRIVER_ID_MESA_V3DV");
    case 20: return sv("VK_DRIVER_ID_MESA_PANVK");
    case 21: return sv("VK_DRIVER_ID_SAMSUNG_PROPRIETARY");
    case 22: return sv("VK_DRIVER_ID_MESA_VENUS");
    case 23: return sv("VK_DRIVER_ID_MESA_DOZEN");
    case 24: return sv("VK_DRIVER_ID_MESA_NVK");
    case 25: return sv("VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA");
    case 26: return sv("VK_DRIVER_ID_MESA_HONEYKRISP");
    case 27: return sv("VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN");
    case 28: return sv("VK_DRIVER_ID_MESA_KOSMICKRISP");
    // case 1: return sv("VK_DRIVER_ID_AMD_PROPRIETARY_KHR"); // duplicate value
    // case 2: return sv("VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR"); // duplicate value
    // case 3: return sv("VK_DRIVER_ID_MESA_RADV_KHR"); // duplicate value
    // case 4: return sv("VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR"); // duplicate value
    // case 5: return sv("VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR"); // duplicate value
    // case 6: return sv("VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR"); // duplicate value
    // case 7: return sv("VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR"); // duplicate value
    // case 8: return sv("VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR"); // duplicate value
    // case 9: return sv("VK_DRIVER_ID_ARM_PROPRIETARY_KHR"); // duplicate value
    // case 10: return sv("VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR"); // duplicate value
    // case 11: return sv("VK_DRIVER_ID_GGP_PROPRIETARY_KHR"); // duplicate value
    // case 12: return sv("VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR"); // duplicate value
    case 2147483647: return sv("VK_DRIVER_ID_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDisplaySurfaceStereoTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DISPLAY_SURFACE_STEREO_TYPE_NONE_NV");
    case 1: return sv("VK_DISPLAY_SURFACE_STEREO_TYPE_ONBOARD_DIN_NV");
    case 2: return sv("VK_DISPLAY_SURFACE_STEREO_TYPE_HDMI_3D_NV");
    case 3: return sv("VK_DISPLAY_SURFACE_STEREO_TYPE_INBAND_DISPLAYPORT_NV");
    case 2147483647: return sv("VK_DISPLAY_SURFACE_STEREO_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDisplayPowerStateEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DISPLAY_POWER_STATE_OFF_EXT");
    case 1: return sv("VK_DISPLAY_POWER_STATE_SUSPEND_EXT");
    case 2: return sv("VK_DISPLAY_POWER_STATE_ON_EXT");
    case 2147483647: return sv("VK_DISPLAY_POWER_STATE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDisplayPlaneAlphaFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR");
    case 2: return sv("VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR");
    case 4: return sv("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR");
    case 8: return sv("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR");
    case 2147483647: return sv("VK_DISPLAY_PLANE_ALPHA_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDisplayEventTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT");
    case 2147483647: return sv("VK_DISPLAY_EVENT_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDiscardRectangleModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT");
    case 1: return sv("VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT");
    case 2147483647: return sv("VK_DISCARD_RECTANGLE_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDirectDriverLoadingModeLUNARG(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DIRECT_DRIVER_LOADING_MODE_EXCLUSIVE_LUNARG");
    case 1: return sv("VK_DIRECT_DRIVER_LOADING_MODE_INCLUSIVE_LUNARG");
    case 2147483647: return sv("VK_DIRECT_DRIVER_LOADING_MODE_MAX_ENUM_LUNARG");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceQueueCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT");
    case 4: return sv("VK_DEVICE_QUEUE_CREATE_INTERNALLY_SYNCHRONIZED_BIT_KHR");
    case 2147483647: return sv("VK_DEVICE_QUEUE_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceMemoryReportEventTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT");
    case 1: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT");
    case 2: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT");
    case 3: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT");
    case 4: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT");
    case 2147483647: return sv("VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceGroupPresentModeFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR");
    case 2: return sv("VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR");
    case 4: return sv("VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR");
    case 8: return sv("VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR");
    case 2147483647: return sv("VK_DEVICE_GROUP_PRESENT_MODE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceFaultVendorBinaryHeaderVersionEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEVICE_FAULT_VENDOR_BINARY_HEADER_VERSION_ONE_EXT");
    case 2147483647: return sv("VK_DEVICE_FAULT_VENDOR_BINARY_HEADER_VERSION_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceFaultAddressTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_NONE_EXT");
    case 1: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_READ_INVALID_EXT");
    case 2: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_WRITE_INVALID_EXT");
    case 3: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_EXECUTE_INVALID_EXT");
    case 4: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_UNKNOWN_EXT");
    case 5: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_INVALID_EXT");
    case 6: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_FAULT_EXT");
    case 2147483647: return sv("VK_DEVICE_FAULT_ADDRESS_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceEventTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT");
    case 2147483647: return sv("VK_DEVICE_EVENT_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceDiagnosticsConfigFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV");
    case 2: return sv("VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV");
    case 4: return sv("VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV");
    case 8: return sv("VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV");
    case 2147483647: return sv("VK_DEVICE_DIAGNOSTICS_CONFIG_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceAddressBindingTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEVICE_ADDRESS_BINDING_TYPE_BIND_EXT");
    case 1: return sv("VK_DEVICE_ADDRESS_BINDING_TYPE_UNBIND_EXT");
    case 2147483647: return sv("VK_DEVICE_ADDRESS_BINDING_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDeviceAddressBindingFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEVICE_ADDRESS_BINDING_INTERNAL_OBJECT_BIT_EXT");
    case 2147483647: return sv("VK_DEVICE_ADDRESS_BINDING_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorUpdateTemplateType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET");
    case 1: return sv("VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS");
    // case 1: return sv("VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR"); // duplicate value
    // case 0: return sv("VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR"); // duplicate value
    case 2147483647: return sv("VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorType(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DESCRIPTOR_TYPE_SAMPLER");
    case 1: return sv("VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER");
    case 2: return sv("VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE");
    case 3: return sv("VK_DESCRIPTOR_TYPE_STORAGE_IMAGE");
    case 4: return sv("VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER");
    case 5: return sv("VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER");
    case 6: return sv("VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER");
    case 7: return sv("VK_DESCRIPTOR_TYPE_STORAGE_BUFFER");
    case 8: return sv("VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC");
    case 9: return sv("VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC");
    case 10: return sv("VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT");
    case 1000138000: return sv("VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK");
    case 1000150000: return sv("VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR");
    case 1000165000: return sv("VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV");
    case 1000440000: return sv("VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM");
    case 1000440001: return sv("VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM");
    case 1000460000: return sv("VK_DESCRIPTOR_TYPE_TENSOR_ARM");
    case 1000351000: return sv("VK_DESCRIPTOR_TYPE_MUTABLE_EXT");
    case 1000570000: return sv("VK_DESCRIPTOR_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_NV");
    // case 1000138000: return sv("VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT"); // duplicate value
    // case 1000351000: return sv("VK_DESCRIPTOR_TYPE_MUTABLE_VALVE"); // duplicate value
    case 2147483647: return sv("VK_DESCRIPTOR_TYPE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorSetLayoutCreateFlagBits(int64_t value) {
    switch (value) {
    case 2: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT");
    case 1: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT");
    case 16: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_DESCRIPTOR_BUFFER_BIT_EXT");
    case 32: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT");
    case 128: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_INDIRECT_BINDABLE_BIT_NV");
    case 4: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT");
    case 64: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_PER_STAGE_BIT_NV");
    // case 1: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR"); // duplicate value
    // case 2: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE"); // duplicate value
    case 2147483647: return sv("VK_DESCRIPTOR_SET_LAYOUT_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorPoolCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT");
    case 2: return sv("VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT");
    case 4: return sv("VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_EXT");
    case 8: return sv("VK_DESCRIPTOR_POOL_CREATE_ALLOW_OVERALLOCATION_SETS_BIT_NV");
    case 16: return sv("VK_DESCRIPTOR_POOL_CREATE_ALLOW_OVERALLOCATION_POOLS_BIT_NV");
    // case 2: return sv("VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE"); // duplicate value
    case 2147483647: return sv("VK_DESCRIPTOR_POOL_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorMappingSourceEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_HEAP_WITH_CONSTANT_OFFSET_EXT");
    case 1: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_HEAP_WITH_PUSH_INDEX_EXT");
    case 2: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_HEAP_WITH_INDIRECT_INDEX_EXT");
    case 3: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_HEAP_WITH_INDIRECT_INDEX_ARRAY_EXT");
    case 4: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_RESOURCE_HEAP_DATA_EXT");
    case 5: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_PUSH_DATA_EXT");
    case 6: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_PUSH_ADDRESS_EXT");
    case 7: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_INDIRECT_ADDRESS_EXT");
    case 8: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_HEAP_WITH_SHADER_RECORD_INDEX_EXT");
    case 9: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_SHADER_RECORD_DATA_EXT");
    case 10: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_SHADER_RECORD_ADDRESS_EXT");
    case 2147483647: return sv("VK_DESCRIPTOR_MAPPING_SOURCE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDescriptorBindingFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT");
    case 2: return sv("VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT");
    case 4: return sv("VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT");
    case 8: return sv("VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT");
    // case 1: return sv("VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT"); // duplicate value
    // case 2: return sv("VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT"); // duplicate value
    // case 4: return sv("VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT"); // duplicate value
    // case 8: return sv("VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT"); // duplicate value
    case 2147483647: return sv("VK_DESCRIPTOR_BINDING_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDepthClampModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEPTH_CLAMP_MODE_VIEWPORT_RANGE_EXT");
    case 1: return sv("VK_DEPTH_CLAMP_MODE_USER_DEFINED_RANGE_EXT");
    case 2147483647: return sv("VK_DEPTH_CLAMP_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDepthBiasRepresentationEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEPTH_BIAS_REPRESENTATION_LEAST_REPRESENTABLE_VALUE_FORMAT_EXT");
    case 1: return sv("VK_DEPTH_BIAS_REPRESENTATION_LEAST_REPRESENTABLE_VALUE_FORCE_UNORM_EXT");
    case 2: return sv("VK_DEPTH_BIAS_REPRESENTATION_FLOAT_EXT");
    case 2147483647: return sv("VK_DEPTH_BIAS_REPRESENTATION_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDependencyFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEPENDENCY_BY_REGION_BIT");
    case 4: return sv("VK_DEPENDENCY_DEVICE_GROUP_BIT");
    case 2: return sv("VK_DEPENDENCY_VIEW_LOCAL_BIT");
    case 8: return sv("VK_DEPENDENCY_FEEDBACK_LOOP_BIT_EXT");
    case 32: return sv("VK_DEPENDENCY_QUEUE_FAMILY_OWNERSHIP_TRANSFER_USE_ALL_STAGES_BIT_KHR");
    case 64: return sv("VK_DEPENDENCY_ASYMMETRIC_EVENT_BIT_KHR");
    // case 2: return sv("VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR"); // duplicate value
    // case 4: return sv("VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_DEPENDENCY_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDefaultVertexAttributeValueKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEFAULT_VERTEX_ATTRIBUTE_VALUE_ZERO_ZERO_ZERO_ZERO_KHR");
    case 1: return sv("VK_DEFAULT_VERTEX_ATTRIBUTE_VALUE_ZERO_ZERO_ZERO_ONE_KHR");
    case 2147483647: return sv("VK_DEFAULT_VERTEX_ATTRIBUTE_VALUE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDebugUtilsMessageTypeFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT");
    case 2: return sv("VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT");
    case 4: return sv("VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT");
    case 8: return sv("VK_DEBUG_UTILS_MESSAGE_TYPE_DEVICE_ADDRESS_BINDING_BIT_EXT");
    case 2147483647: return sv("VK_DEBUG_UTILS_MESSAGE_TYPE_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDebugUtilsMessageSeverityFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT");
    case 16: return sv("VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT");
    case 256: return sv("VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT");
    case 4096: return sv("VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT");
    case 2147483647: return sv("VK_DEBUG_UTILS_MESSAGE_SEVERITY_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDebugReportObjectTypeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT");
    case 1: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT");
    case 2: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT");
    case 3: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT");
    case 4: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT");
    case 5: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT");
    case 6: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT");
    case 7: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT");
    case 8: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT");
    case 9: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT");
    case 10: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT");
    case 11: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT");
    case 12: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT");
    case 13: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT");
    case 14: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT");
    case 15: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT");
    case 16: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT");
    case 17: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT");
    case 18: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT");
    case 19: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT");
    case 20: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT");
    case 21: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT");
    case 22: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT");
    case 23: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT");
    case 24: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT");
    case 25: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT");
    case 26: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT");
    case 27: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT");
    case 28: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT");
    case 29: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT");
    case 30: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT");
    case 33: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT");
    case 1000156000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT");
    case 1000085000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT");
    case 1000029000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT");
    case 1000029001: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT");
    case 1000150000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT");
    case 1000165000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT");
    case 1000307000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_CUDA_MODULE_NV_EXT");
    case 1000307001: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_CUDA_FUNCTION_NV_EXT");
    case 1000366000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA_EXT");
    // case 28: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT"); // duplicate value
    // case 33: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT"); // duplicate value
    // case 1000085000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT"); // duplicate value
    // case 1000156000: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT"); // duplicate value
    case 2147483647: return sv("VK_DEBUG_REPORT_OBJECT_TYPE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDebugReportFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_DEBUG_REPORT_INFORMATION_BIT_EXT");
    case 2: return sv("VK_DEBUG_REPORT_WARNING_BIT_EXT");
    case 4: return sv("VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT");
    case 8: return sv("VK_DEBUG_REPORT_ERROR_BIT_EXT");
    case 16: return sv("VK_DEBUG_REPORT_DEBUG_BIT_EXT");
    case 2147483647: return sv("VK_DEBUG_REPORT_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDataGraphPipelineSessionBindPointTypeARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_TYPE_MEMORY_ARM");
    case 2147483647: return sv("VK_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_TYPE_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDataGraphPipelineSessionBindPointARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_TRANSIENT_ARM");
    case 2147483647: return sv("VK_DATA_GRAPH_PIPELINE_SESSION_BIND_POINT_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDataGraphPipelinePropertyARM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DATA_GRAPH_PIPELINE_PROPERTY_CREATION_LOG_ARM");
    case 1: return sv("VK_DATA_GRAPH_PIPELINE_PROPERTY_IDENTIFIER_ARM");
    case 2147483647: return sv("VK_DATA_GRAPH_PIPELINE_PROPERTY_MAX_ENUM_ARM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkDataGraphModelCacheTypeQCOM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_DATA_GRAPH_MODEL_CACHE_TYPE_GENERIC_BINARY_QCOM");
    case 2147483647: return sv("VK_DATA_GRAPH_MODEL_CACHE_TYPE_MAX_ENUM_QCOM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCullModeFlagBits(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CULL_MODE_NONE");
    case 1: return sv("VK_CULL_MODE_FRONT_BIT");
    case 2: return sv("VK_CULL_MODE_BACK_BIT");
    case 3: return sv("VK_CULL_MODE_FRONT_AND_BACK");
    case 2147483647: return sv("VK_CULL_MODE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCubicFilterWeightsQCOM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CUBIC_FILTER_WEIGHTS_CATMULL_ROM_QCOM");
    case 1: return sv("VK_CUBIC_FILTER_WEIGHTS_ZERO_TANGENT_CARDINAL_QCOM");
    case 2: return sv("VK_CUBIC_FILTER_WEIGHTS_B_SPLINE_QCOM");
    case 3: return sv("VK_CUBIC_FILTER_WEIGHTS_MITCHELL_NETRAVALI_QCOM");
    case 2147483647: return sv("VK_CUBIC_FILTER_WEIGHTS_MAX_ENUM_QCOM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCoverageReductionModeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COVERAGE_REDUCTION_MODE_MERGE_NV");
    case 1: return sv("VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV");
    case 2147483647: return sv("VK_COVERAGE_REDUCTION_MODE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCoverageModulationModeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COVERAGE_MODULATION_MODE_NONE_NV");
    case 1: return sv("VK_COVERAGE_MODULATION_MODE_RGB_NV");
    case 2: return sv("VK_COVERAGE_MODULATION_MODE_ALPHA_NV");
    case 3: return sv("VK_COVERAGE_MODULATION_MODE_RGBA_NV");
    case 2147483647: return sv("VK_COVERAGE_MODULATION_MODE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCopyMicromapModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COPY_MICROMAP_MODE_CLONE_EXT");
    case 1: return sv("VK_COPY_MICROMAP_MODE_SERIALIZE_EXT");
    case 2: return sv("VK_COPY_MICROMAP_MODE_DESERIALIZE_EXT");
    case 3: return sv("VK_COPY_MICROMAP_MODE_COMPACT_EXT");
    case 2147483647: return sv("VK_COPY_MICROMAP_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCopyAccelerationStructureModeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR");
    case 1: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR");
    case 2: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR");
    case 3: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR");
    // case 0: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV"); // duplicate value
    // case 1: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV"); // duplicate value
    case 2147483647: return sv("VK_COPY_ACCELERATION_STRUCTURE_MODE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCooperativeVectorMatrixLayoutNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_ROW_MAJOR_NV");
    case 1: return sv("VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_COLUMN_MAJOR_NV");
    case 2: return sv("VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_INFERENCING_OPTIMAL_NV");
    case 3: return sv("VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_TRAINING_OPTIMAL_NV");
    case 2147483647: return sv("VK_COOPERATIVE_VECTOR_MATRIX_LAYOUT_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkConservativeRasterizationModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT");
    case 1: return sv("VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT");
    case 2: return sv("VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT");
    case 2147483647: return sv("VK_CONSERVATIVE_RASTERIZATION_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkConditionalRenderingFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT");
    case 2147483647: return sv("VK_CONDITIONAL_RENDERING_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCompositeAlphaFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR");
    case 2: return sv("VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR");
    case 4: return sv("VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR");
    case 8: return sv("VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR");
    case 2147483647: return sv("VK_COMPOSITE_ALPHA_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkComponentTypeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COMPONENT_TYPE_FLOAT16_KHR");
    case 1: return sv("VK_COMPONENT_TYPE_FLOAT32_KHR");
    case 2: return sv("VK_COMPONENT_TYPE_FLOAT64_KHR");
    case 3: return sv("VK_COMPONENT_TYPE_SINT8_KHR");
    case 4: return sv("VK_COMPONENT_TYPE_SINT16_KHR");
    case 5: return sv("VK_COMPONENT_TYPE_SINT32_KHR");
    case 6: return sv("VK_COMPONENT_TYPE_SINT64_KHR");
    case 7: return sv("VK_COMPONENT_TYPE_UINT8_KHR");
    case 8: return sv("VK_COMPONENT_TYPE_UINT16_KHR");
    case 9: return sv("VK_COMPONENT_TYPE_UINT32_KHR");
    case 10: return sv("VK_COMPONENT_TYPE_UINT64_KHR");
    case 1000141000: return sv("VK_COMPONENT_TYPE_BFLOAT16_KHR");
    case 1000491000: return sv("VK_COMPONENT_TYPE_SINT8_PACKED_NV");
    case 1000491001: return sv("VK_COMPONENT_TYPE_UINT8_PACKED_NV");
    case 1000491002: return sv("VK_COMPONENT_TYPE_FLOAT8_E4M3_EXT");
    case 1000491003: return sv("VK_COMPONENT_TYPE_FLOAT8_E5M2_EXT");
    // case 0: return sv("VK_COMPONENT_TYPE_FLOAT16_NV"); // duplicate value
    // case 1: return sv("VK_COMPONENT_TYPE_FLOAT32_NV"); // duplicate value
    // case 2: return sv("VK_COMPONENT_TYPE_FLOAT64_NV"); // duplicate value
    // case 3: return sv("VK_COMPONENT_TYPE_SINT8_NV"); // duplicate value
    // case 4: return sv("VK_COMPONENT_TYPE_SINT16_NV"); // duplicate value
    // case 5: return sv("VK_COMPONENT_TYPE_SINT32_NV"); // duplicate value
    // case 6: return sv("VK_COMPONENT_TYPE_SINT64_NV"); // duplicate value
    // case 7: return sv("VK_COMPONENT_TYPE_UINT8_NV"); // duplicate value
    // case 8: return sv("VK_COMPONENT_TYPE_UINT16_NV"); // duplicate value
    // case 9: return sv("VK_COMPONENT_TYPE_UINT32_NV"); // duplicate value
    // case 10: return sv("VK_COMPONENT_TYPE_UINT64_NV"); // duplicate value
    // case 1000491002: return sv("VK_COMPONENT_TYPE_FLOAT_E4M3_NV"); // duplicate value
    // case 1000491003: return sv("VK_COMPONENT_TYPE_FLOAT_E5M2_NV"); // duplicate value
    case 2147483647: return sv("VK_COMPONENT_TYPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkComponentSwizzle(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COMPONENT_SWIZZLE_IDENTITY");
    case 1: return sv("VK_COMPONENT_SWIZZLE_ZERO");
    case 2: return sv("VK_COMPONENT_SWIZZLE_ONE");
    case 3: return sv("VK_COMPONENT_SWIZZLE_R");
    case 4: return sv("VK_COMPONENT_SWIZZLE_G");
    case 5: return sv("VK_COMPONENT_SWIZZLE_B");
    case 6: return sv("VK_COMPONENT_SWIZZLE_A");
    case 2147483647: return sv("VK_COMPONENT_SWIZZLE_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCompareOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COMPARE_OP_NEVER");
    case 1: return sv("VK_COMPARE_OP_LESS");
    case 2: return sv("VK_COMPARE_OP_EQUAL");
    case 3: return sv("VK_COMPARE_OP_LESS_OR_EQUAL");
    case 4: return sv("VK_COMPARE_OP_GREATER");
    case 5: return sv("VK_COMPARE_OP_NOT_EQUAL");
    case 6: return sv("VK_COMPARE_OP_GREATER_OR_EQUAL");
    case 7: return sv("VK_COMPARE_OP_ALWAYS");
    case 2147483647: return sv("VK_COMPARE_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCommandPoolResetFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT");
    case 2147483647: return sv("VK_COMMAND_POOL_RESET_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCommandPoolCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COMMAND_POOL_CREATE_TRANSIENT_BIT");
    case 2: return sv("VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT");
    case 4: return sv("VK_COMMAND_POOL_CREATE_PROTECTED_BIT");
    case 2147483647: return sv("VK_COMMAND_POOL_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCommandBufferUsageFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT");
    case 2: return sv("VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT");
    case 4: return sv("VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT");
    case 2147483647: return sv("VK_COMMAND_BUFFER_USAGE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCommandBufferResetFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT");
    case 2147483647: return sv("VK_COMMAND_BUFFER_RESET_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCommandBufferLevel(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COMMAND_BUFFER_LEVEL_PRIMARY");
    case 1: return sv("VK_COMMAND_BUFFER_LEVEL_SECONDARY");
    case 2147483647: return sv("VK_COMMAND_BUFFER_LEVEL_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkColorSpaceKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COLOR_SPACE_SRGB_NONLINEAR_KHR");
    case 1000104001: return sv("VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT");
    case 1000104002: return sv("VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT");
    case 1000104003: return sv("VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT");
    case 1000104004: return sv("VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT");
    case 1000104005: return sv("VK_COLOR_SPACE_BT709_LINEAR_EXT");
    case 1000104006: return sv("VK_COLOR_SPACE_BT709_NONLINEAR_EXT");
    case 1000104007: return sv("VK_COLOR_SPACE_BT2020_LINEAR_EXT");
    case 1000104008: return sv("VK_COLOR_SPACE_HDR10_ST2084_EXT");
    case 1000104009: return sv("VK_COLOR_SPACE_DOLBYVISION_EXT");
    case 1000104010: return sv("VK_COLOR_SPACE_HDR10_HLG_EXT");
    case 1000104011: return sv("VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT");
    case 1000104012: return sv("VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT");
    case 1000104013: return sv("VK_COLOR_SPACE_PASS_THROUGH_EXT");
    case 1000104014: return sv("VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT");
    case 1000213000: return sv("VK_COLOR_SPACE_DISPLAY_NATIVE_AMD");
    // case 0: return sv("VK_COLORSPACE_SRGB_NONLINEAR_KHR"); // duplicate value
    // case 1000104003: return sv("VK_COLOR_SPACE_DCI_P3_LINEAR_EXT"); // duplicate value
    case 2147483647: return sv("VK_COLOR_SPACE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkColorComponentFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_COLOR_COMPONENT_R_BIT");
    case 2: return sv("VK_COLOR_COMPONENT_G_BIT");
    case 4: return sv("VK_COLOR_COMPONENT_B_BIT");
    case 8: return sv("VK_COLOR_COMPONENT_A_BIT");
    case 2147483647: return sv("VK_COLOR_COMPONENT_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkCoarseSampleOrderTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV");
    case 1: return sv("VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV");
    case 2: return sv("VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV");
    case 3: return sv("VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV");
    case 2147483647: return sv("VK_COARSE_SAMPLE_ORDER_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_TYPE_CLUSTERS_BOTTOM_LEVEL_NV");
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_TYPE_TRIANGLE_CLUSTER_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_TYPE_TRIANGLE_CLUSTER_TEMPLATE_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureOpTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_MOVE_OBJECTS_NV");
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_BUILD_CLUSTERS_BOTTOM_LEVEL_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_BUILD_TRIANGLE_CLUSTER_NV");
    case 3: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_BUILD_TRIANGLE_CLUSTER_TEMPLATE_NV");
    case 4: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_INSTANTIATE_TRIANGLE_CLUSTER_NV");
    case 5: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_GET_CLUSTER_TEMPLATE_INDICES_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureOpModeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_MODE_IMPLICIT_DESTINATIONS_NV");
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_MODE_EXPLICIT_DESTINATIONS_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_MODE_COMPUTE_SIZES_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_OP_MODE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureIndexFormatFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_INDEX_FORMAT_8BIT_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_INDEX_FORMAT_16BIT_NV");
    case 4: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_INDEX_FORMAT_32BIT_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_INDEX_FORMAT_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureGeometryFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_GEOMETRY_CULL_DISABLE_BIT_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_GEOMETRY_NO_DUPLICATE_ANYHIT_INVOCATION_BIT_NV");
    case 4: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_GEOMETRY_OPAQUE_BIT_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_GEOMETRY_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureClusterFlagBitsNV(int64_t value) {
    switch (value) {
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_CLUSTER_ALLOW_DISABLE_OPACITY_MICROMAPS_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_CLUSTER_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkClusterAccelerationStructureAddressResolutionFlagBitsNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_NONE_NV");
    case 1: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_DST_IMPLICIT_DATA_BIT_NV");
    case 2: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_SCRATCH_DATA_BIT_NV");
    case 4: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_DST_ADDRESS_ARRAY_BIT_NV");
    case 8: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_DST_SIZES_ARRAY_BIT_NV");
    case 16: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_SRC_INFOS_ARRAY_BIT_NV");
    case 32: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_INDIRECTED_SRC_INFOS_COUNT_BIT_NV");
    case 2147483647: return sv("VK_CLUSTER_ACCELERATION_STRUCTURE_ADDRESS_RESOLUTION_FLAG_BITS_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkChromaLocation(int64_t value) {
    switch (value) {
    case 0: return sv("VK_CHROMA_LOCATION_COSITED_EVEN");
    case 1: return sv("VK_CHROMA_LOCATION_MIDPOINT");
    // case 0: return sv("VK_CHROMA_LOCATION_COSITED_EVEN_KHR"); // duplicate value
    // case 1: return sv("VK_CHROMA_LOCATION_MIDPOINT_KHR"); // duplicate value
    case 2147483647: return sv("VK_CHROMA_LOCATION_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBuildMicromapModeEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BUILD_MICROMAP_MODE_BUILD_EXT");
    case 2147483647: return sv("VK_BUILD_MICROMAP_MODE_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBuildMicromapFlagBitsEXT(int64_t value) {
    switch (value) {
    case 1: return sv("VK_BUILD_MICROMAP_PREFER_FAST_TRACE_BIT_EXT");
    case 2: return sv("VK_BUILD_MICROMAP_PREFER_FAST_BUILD_BIT_EXT");
    case 4: return sv("VK_BUILD_MICROMAP_ALLOW_COMPACTION_BIT_EXT");
    case 2147483647: return sv("VK_BUILD_MICROMAP_FLAG_BITS_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBuildAccelerationStructureModeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR");
    case 1: return sv("VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR");
    case 2147483647: return sv("VK_BUILD_ACCELERATION_STRUCTURE_MODE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBuildAccelerationStructureFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR");
    case 2: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR");
    case 4: return sv("VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR");
    case 8: return sv("VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR");
    case 16: return sv("VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR");
    case 32: return sv("VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV");
    case 64: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_BIT_EXT");
    case 128: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_BIT_EXT");
    case 256: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_BIT_EXT");
    case 2048: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DATA_ACCESS_BIT_KHR");
    case 4096: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_CLUSTER_OPACITY_MICROMAPS_BIT_NV");
    // case 1: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV"); // duplicate value
    // case 2: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV"); // duplicate value
    // case 4: return sv("VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV"); // duplicate value
    // case 8: return sv("VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV"); // duplicate value
    // case 16: return sv("VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV"); // duplicate value
    // case 64: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT"); // duplicate value
    // case 128: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT"); // duplicate value
    // case 256: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT"); // duplicate value
    // case 2048: return sv("VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DATA_ACCESS_KHR"); // duplicate value
    case 2147483647: return sv("VK_BUILD_ACCELERATION_STRUCTURE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBufferUsageFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_BUFFER_USAGE_TRANSFER_SRC_BIT");
    case 2: return sv("VK_BUFFER_USAGE_TRANSFER_DST_BIT");
    case 4: return sv("VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT");
    case 8: return sv("VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT");
    case 16: return sv("VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT");
    case 32: return sv("VK_BUFFER_USAGE_STORAGE_BUFFER_BIT");
    case 64: return sv("VK_BUFFER_USAGE_INDEX_BUFFER_BIT");
    case 128: return sv("VK_BUFFER_USAGE_VERTEX_BUFFER_BIT");
    case 256: return sv("VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT");
    case 131072: return sv("VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT");
    case 8192: return sv("VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR");
    case 16384: return sv("VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR");
    case 2048: return sv("VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT");
    case 4096: return sv("VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT");
    case 512: return sv("VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT");
    case 268435456: return sv("VK_BUFFER_USAGE_DESCRIPTOR_HEAP_BIT_EXT");
    case 524288: return sv("VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR");
    case 1048576: return sv("VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR");
    case 1024: return sv("VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR");
    case 32768: return sv("VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR");
    case 65536: return sv("VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR");
    case 2097152: return sv("VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT");
    case 4194304: return sv("VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT");
    case 67108864: return sv("VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT");
    case 8388608: return sv("VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT");
    case 16777216: return sv("VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT");
    case 134217728: return sv("VK_BUFFER_USAGE_TILE_MEMORY_BIT_QCOM");
    // case 1024: return sv("VK_BUFFER_USAGE_RAY_TRACING_BIT_NV"); // duplicate value
    // case 131072: return sv("VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT"); // duplicate value
    // case 131072: return sv("VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_BUFFER_USAGE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBufferCreateFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_BUFFER_CREATE_SPARSE_BINDING_BIT");
    case 2: return sv("VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT");
    case 4: return sv("VK_BUFFER_CREATE_SPARSE_ALIASED_BIT");
    case 8: return sv("VK_BUFFER_CREATE_PROTECTED_BIT");
    case 16: return sv("VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT");
    case 32: return sv("VK_BUFFER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT");
    case 64: return sv("VK_BUFFER_CREATE_VIDEO_PROFILE_INDEPENDENT_BIT_KHR");
    // case 16: return sv("VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT"); // duplicate value
    // case 16: return sv("VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR"); // duplicate value
    case 2147483647: return sv("VK_BUFFER_CREATE_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBorderColor(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK");
    case 1: return sv("VK_BORDER_COLOR_INT_TRANSPARENT_BLACK");
    case 2: return sv("VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK");
    case 3: return sv("VK_BORDER_COLOR_INT_OPAQUE_BLACK");
    case 4: return sv("VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE");
    case 5: return sv("VK_BORDER_COLOR_INT_OPAQUE_WHITE");
    case 1000287003: return sv("VK_BORDER_COLOR_FLOAT_CUSTOM_EXT");
    case 1000287004: return sv("VK_BORDER_COLOR_INT_CUSTOM_EXT");
    case 2147483647: return sv("VK_BORDER_COLOR_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBlockMatchWindowCompareModeQCOM(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BLOCK_MATCH_WINDOW_COMPARE_MODE_MIN_QCOM");
    case 1: return sv("VK_BLOCK_MATCH_WINDOW_COMPARE_MODE_MAX_QCOM");
    case 2147483647: return sv("VK_BLOCK_MATCH_WINDOW_COMPARE_MODE_MAX_ENUM_QCOM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBlendOverlapEXT(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BLEND_OVERLAP_UNCORRELATED_EXT");
    case 1: return sv("VK_BLEND_OVERLAP_DISJOINT_EXT");
    case 2: return sv("VK_BLEND_OVERLAP_CONJOINT_EXT");
    case 2147483647: return sv("VK_BLEND_OVERLAP_MAX_ENUM_EXT");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBlendOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BLEND_OP_ADD");
    case 1: return sv("VK_BLEND_OP_SUBTRACT");
    case 2: return sv("VK_BLEND_OP_REVERSE_SUBTRACT");
    case 3: return sv("VK_BLEND_OP_MIN");
    case 4: return sv("VK_BLEND_OP_MAX");
    case 1000148000: return sv("VK_BLEND_OP_ZERO_EXT");
    case 1000148001: return sv("VK_BLEND_OP_SRC_EXT");
    case 1000148002: return sv("VK_BLEND_OP_DST_EXT");
    case 1000148003: return sv("VK_BLEND_OP_SRC_OVER_EXT");
    case 1000148004: return sv("VK_BLEND_OP_DST_OVER_EXT");
    case 1000148005: return sv("VK_BLEND_OP_SRC_IN_EXT");
    case 1000148006: return sv("VK_BLEND_OP_DST_IN_EXT");
    case 1000148007: return sv("VK_BLEND_OP_SRC_OUT_EXT");
    case 1000148008: return sv("VK_BLEND_OP_DST_OUT_EXT");
    case 1000148009: return sv("VK_BLEND_OP_SRC_ATOP_EXT");
    case 1000148010: return sv("VK_BLEND_OP_DST_ATOP_EXT");
    case 1000148011: return sv("VK_BLEND_OP_XOR_EXT");
    case 1000148012: return sv("VK_BLEND_OP_MULTIPLY_EXT");
    case 1000148013: return sv("VK_BLEND_OP_SCREEN_EXT");
    case 1000148014: return sv("VK_BLEND_OP_OVERLAY_EXT");
    case 1000148015: return sv("VK_BLEND_OP_DARKEN_EXT");
    case 1000148016: return sv("VK_BLEND_OP_LIGHTEN_EXT");
    case 1000148017: return sv("VK_BLEND_OP_COLORDODGE_EXT");
    case 1000148018: return sv("VK_BLEND_OP_COLORBURN_EXT");
    case 1000148019: return sv("VK_BLEND_OP_HARDLIGHT_EXT");
    case 1000148020: return sv("VK_BLEND_OP_SOFTLIGHT_EXT");
    case 1000148021: return sv("VK_BLEND_OP_DIFFERENCE_EXT");
    case 1000148022: return sv("VK_BLEND_OP_EXCLUSION_EXT");
    case 1000148023: return sv("VK_BLEND_OP_INVERT_EXT");
    case 1000148024: return sv("VK_BLEND_OP_INVERT_RGB_EXT");
    case 1000148025: return sv("VK_BLEND_OP_LINEARDODGE_EXT");
    case 1000148026: return sv("VK_BLEND_OP_LINEARBURN_EXT");
    case 1000148027: return sv("VK_BLEND_OP_VIVIDLIGHT_EXT");
    case 1000148028: return sv("VK_BLEND_OP_LINEARLIGHT_EXT");
    case 1000148029: return sv("VK_BLEND_OP_PINLIGHT_EXT");
    case 1000148030: return sv("VK_BLEND_OP_HARDMIX_EXT");
    case 1000148031: return sv("VK_BLEND_OP_HSL_HUE_EXT");
    case 1000148032: return sv("VK_BLEND_OP_HSL_SATURATION_EXT");
    case 1000148033: return sv("VK_BLEND_OP_HSL_COLOR_EXT");
    case 1000148034: return sv("VK_BLEND_OP_HSL_LUMINOSITY_EXT");
    case 1000148035: return sv("VK_BLEND_OP_PLUS_EXT");
    case 1000148036: return sv("VK_BLEND_OP_PLUS_CLAMPED_EXT");
    case 1000148037: return sv("VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT");
    case 1000148038: return sv("VK_BLEND_OP_PLUS_DARKER_EXT");
    case 1000148039: return sv("VK_BLEND_OP_MINUS_EXT");
    case 1000148040: return sv("VK_BLEND_OP_MINUS_CLAMPED_EXT");
    case 1000148041: return sv("VK_BLEND_OP_CONTRAST_EXT");
    case 1000148042: return sv("VK_BLEND_OP_INVERT_OVG_EXT");
    case 1000148043: return sv("VK_BLEND_OP_RED_EXT");
    case 1000148044: return sv("VK_BLEND_OP_GREEN_EXT");
    case 1000148045: return sv("VK_BLEND_OP_BLUE_EXT");
    case 2147483647: return sv("VK_BLEND_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkBlendFactor(int64_t value) {
    switch (value) {
    case 0: return sv("VK_BLEND_FACTOR_ZERO");
    case 1: return sv("VK_BLEND_FACTOR_ONE");
    case 2: return sv("VK_BLEND_FACTOR_SRC_COLOR");
    case 3: return sv("VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR");
    case 4: return sv("VK_BLEND_FACTOR_DST_COLOR");
    case 5: return sv("VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR");
    case 6: return sv("VK_BLEND_FACTOR_SRC_ALPHA");
    case 7: return sv("VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA");
    case 8: return sv("VK_BLEND_FACTOR_DST_ALPHA");
    case 9: return sv("VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA");
    case 10: return sv("VK_BLEND_FACTOR_CONSTANT_COLOR");
    case 11: return sv("VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR");
    case 12: return sv("VK_BLEND_FACTOR_CONSTANT_ALPHA");
    case 13: return sv("VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA");
    case 14: return sv("VK_BLEND_FACTOR_SRC_ALPHA_SATURATE");
    case 15: return sv("VK_BLEND_FACTOR_SRC1_COLOR");
    case 16: return sv("VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR");
    case 17: return sv("VK_BLEND_FACTOR_SRC1_ALPHA");
    case 18: return sv("VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA");
    case 2147483647: return sv("VK_BLEND_FACTOR_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAttachmentStoreOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ATTACHMENT_STORE_OP_STORE");
    case 1: return sv("VK_ATTACHMENT_STORE_OP_DONT_CARE");
    case 1000301000: return sv("VK_ATTACHMENT_STORE_OP_NONE");
    // case 1000301000: return sv("VK_ATTACHMENT_STORE_OP_NONE_KHR"); // duplicate value
    // case 1000301000: return sv("VK_ATTACHMENT_STORE_OP_NONE_QCOM"); // duplicate value
    // case 1000301000: return sv("VK_ATTACHMENT_STORE_OP_NONE_EXT"); // duplicate value
    case 2147483647: return sv("VK_ATTACHMENT_STORE_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAttachmentLoadOp(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ATTACHMENT_LOAD_OP_LOAD");
    case 1: return sv("VK_ATTACHMENT_LOAD_OP_CLEAR");
    case 2: return sv("VK_ATTACHMENT_LOAD_OP_DONT_CARE");
    case 1000400000: return sv("VK_ATTACHMENT_LOAD_OP_NONE");
    // case 1000400000: return sv("VK_ATTACHMENT_LOAD_OP_NONE_EXT"); // duplicate value
    // case 1000400000: return sv("VK_ATTACHMENT_LOAD_OP_NONE_KHR"); // duplicate value
    case 2147483647: return sv("VK_ATTACHMENT_LOAD_OP_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAttachmentDescriptionFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT");
    case 2: return sv("VK_ATTACHMENT_DESCRIPTION_RESOLVE_SKIP_TRANSFER_FUNCTION_BIT_KHR");
    case 4: return sv("VK_ATTACHMENT_DESCRIPTION_RESOLVE_ENABLE_TRANSFER_FUNCTION_BIT_KHR");
    case 2147483647: return sv("VK_ATTACHMENT_DESCRIPTION_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAntiLagStageAMD(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ANTI_LAG_STAGE_INPUT_AMD");
    case 1: return sv("VK_ANTI_LAG_STAGE_PRESENT_AMD");
    case 2147483647: return sv("VK_ANTI_LAG_STAGE_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAntiLagModeAMD(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ANTI_LAG_MODE_DRIVER_CONTROL_AMD");
    case 1: return sv("VK_ANTI_LAG_MODE_ON_AMD");
    case 2: return sv("VK_ANTI_LAG_MODE_OFF_AMD");
    case 2147483647: return sv("VK_ANTI_LAG_MODE_MAX_ENUM_AMD");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAddressCopyFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_ADDRESS_COPY_DEVICE_LOCAL_BIT_KHR");
    case 2: return sv("VK_ADDRESS_COPY_SPARSE_BIT_KHR");
    case 4: return sv("VK_ADDRESS_COPY_PROTECTED_BIT_KHR");
    case 2147483647: return sv("VK_ADDRESS_COPY_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAcquireProfilingLockFlagBitsKHR(int64_t value) {
    switch (value) {
    case 2147483647: return sv("VK_ACQUIRE_PROFILING_LOCK_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccessFlagBits(int64_t value) {
    switch (value) {
    case 1: return sv("VK_ACCESS_INDIRECT_COMMAND_READ_BIT");
    case 2: return sv("VK_ACCESS_INDEX_READ_BIT");
    case 4: return sv("VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT");
    case 8: return sv("VK_ACCESS_UNIFORM_READ_BIT");
    case 16: return sv("VK_ACCESS_INPUT_ATTACHMENT_READ_BIT");
    case 32: return sv("VK_ACCESS_SHADER_READ_BIT");
    case 64: return sv("VK_ACCESS_SHADER_WRITE_BIT");
    case 128: return sv("VK_ACCESS_COLOR_ATTACHMENT_READ_BIT");
    case 256: return sv("VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT");
    case 512: return sv("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT");
    case 1024: return sv("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT");
    case 2048: return sv("VK_ACCESS_TRANSFER_READ_BIT");
    case 4096: return sv("VK_ACCESS_TRANSFER_WRITE_BIT");
    case 8192: return sv("VK_ACCESS_HOST_READ_BIT");
    case 16384: return sv("VK_ACCESS_HOST_WRITE_BIT");
    case 32768: return sv("VK_ACCESS_MEMORY_READ_BIT");
    case 65536: return sv("VK_ACCESS_MEMORY_WRITE_BIT");
    case 0: return sv("VK_ACCESS_NONE");
    case 33554432: return sv("VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT");
    case 67108864: return sv("VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT");
    case 134217728: return sv("VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT");
    case 1048576: return sv("VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT");
    case 524288: return sv("VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT");
    case 2097152: return sv("VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR");
    case 4194304: return sv("VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR");
    case 16777216: return sv("VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT");
    case 8388608: return sv("VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR");
    case 131072: return sv("VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_EXT");
    case 262144: return sv("VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_EXT");
    // case 8388608: return sv("VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV"); // duplicate value
    // case 2097152: return sv("VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV"); // duplicate value
    // case 4194304: return sv("VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV"); // duplicate value
    // case 131072: return sv("VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV"); // duplicate value
    // case 262144: return sv("VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV"); // duplicate value
    // case 0: return sv("VK_ACCESS_NONE_KHR"); // duplicate value
    case 2147483647: return sv("VK_ACCESS_FLAG_BITS_MAX_ENUM");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureTypeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR");
    case 1: return sv("VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR");
    case 2: return sv("VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR");
    // case 0: return sv("VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV"); // duplicate value
    // case 1: return sv("VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV"); // duplicate value
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_TYPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureMotionInstanceTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV");
    case 1: return sv("VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV");
    case 2: return sv("VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_SRT_MOTION_NV");
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureMemoryRequirementsTypeNV(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV");
    case 1: return sv("VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV");
    case 2: return sv("VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV");
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_MAX_ENUM_NV");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureCreateFlagBitsKHR(int64_t value) {
    switch (value) {
    case 1: return sv("VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR");
    case 8: return sv("VK_ACCELERATION_STRUCTURE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT");
    case 4: return sv("VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV");
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_CREATE_FLAG_BITS_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureCompatibilityKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR");
    case 1: return sv("VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR");
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_COMPATIBILITY_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

string_view_t enum_name_VkAccelerationStructureBuildTypeKHR(int64_t value) {
    switch (value) {
    case 0: return sv("VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR");
    case 1: return sv("VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR");
    case 2: return sv("VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR");
    case 2147483647: return sv("VK_ACCELERATION_STRUCTURE_BUILD_TYPE_MAX_ENUM_KHR");
    default: return sv(nullptr);
    };
}

} // namespace vulkan_refl


