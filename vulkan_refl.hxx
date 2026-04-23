// Generated with https://github.com/leslie255/crefl
#include <cstddef>
#include <cstdint>

namespace vulkan_refl {

/// Nullable!
/// If `ptr` is null, then `size` must be 0.
struct string_view_t {
    const char* _Nullable ptr;
    size_t size;
};

[[gnu::always_inline]]
static inline bool operator==(string_view_t lhs, string_view_t rhs) {
    extern int memcmp(const void* lhs, const void* rhs, size_t count);
    if (lhs.size != rhs.size) return false;
    if (lhs.size == 0 && rhs.size == 0) return true;
    return memcmp(lhs.ptr, rhs.ptr, lhs.size) == 0;
}

[[gnu::always_inline]]
static inline constexpr string_view_t sv(nullptr_t) {
    return string_view_t {.ptr = nullptr, .size = 0};
}

[[gnu::always_inline]]
static inline string_view_t sv(const char* cstr) {
    extern size_t strlen(const char* __s);
    return string_view_t {.ptr = cstr, .size = strlen(cstr)};
}

/// If no enum of type `typename_` is known, returns a `string_view_t` with `.ptr = nullptr`
///
/// In C, an enum could have two "names": the `typedef ... name` name and `enum tag` tag. Thus requiring clarification on what `typename_` actually refers to.
/// `typename_` is selected by the below logic:
///
/// - if an enum declaration has a typedef name, use that
/// - if an enum has only enum tag, uses that
/// - if an enum has no names, no reflection code would be generated for that enum
///
/// Reflection codegen would fail if two (or more) enums exists in one file that, by the above logic, would result in the same `typename_`. For example:
///
/// ```cxx
/// typedef enum
/// ```
///
string_view_t enum_name(string_view_t typename_, int64_t value);

string_view_t enum_name_VkViewportCoordinateSwizzleNV(int64_t value);
string_view_t enum_name_VkVideoSessionParametersCreateFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoSessionCreateFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeUsageFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeTuningModeKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeRgbRangeCompressionFlagBitsVALVE(int64_t value);
string_view_t enum_name_VkVideoEncodeRgbModelConversionFlagBitsVALVE(int64_t value);
string_view_t enum_name_VkVideoEncodeRgbChromaOffsetFlagBitsVALVE(int64_t value);
string_view_t enum_name_VkVideoEncodeRateControlModeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeIntraRefreshModeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH265TransformBlockSizeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH265StdFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH265RateControlFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH265CtbSizeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH265CapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH264StdFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH264RateControlFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeH264CapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeFeedbackFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeContentFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeCapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1SuperblockSizeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1StdFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1RateControlGroupKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1RateControlFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1PredictionModeKHR(int64_t value);
string_view_t enum_name_VkVideoEncodeAV1CapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoDecodeUsageFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoDecodeH264PictureLayoutFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoDecodeCapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoComponentBitDepthFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoCodingControlFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoCodecOperationFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoChromaSubsamplingFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVideoCapabilityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkVertexInputRate(int64_t value);
string_view_t enum_name_VkVendorId(int64_t value);
string_view_t enum_name_VkValidationFeatureEnableEXT(int64_t value);
string_view_t enum_name_VkValidationFeatureDisableEXT(int64_t value);
string_view_t enum_name_VkValidationCheckEXT(int64_t value);
string_view_t enum_name_VkValidationCacheHeaderVersionEXT(int64_t value);
string_view_t enum_name_VkToolPurposeFlagBits(int64_t value);
string_view_t enum_name_VkTimeDomainKHR(int64_t value);
string_view_t enum_name_VkTileShadingRenderPassFlagBitsQCOM(int64_t value);
string_view_t enum_name_VkTessellationDomainOrigin(int64_t value);
string_view_t enum_name_VkTensorTilingARM(int64_t value);
string_view_t enum_name_VkSystemAllocationScope(int64_t value);
string_view_t enum_name_VkSwapchainCreateFlagBitsKHR(int64_t value);
string_view_t enum_name_VkSurfaceTransformFlagBitsKHR(int64_t value);
string_view_t enum_name_VkSurfaceCounterFlagBitsEXT(int64_t value);
string_view_t enum_name_VkSubpassMergeStatusEXT(int64_t value);
string_view_t enum_name_VkSubpassDescriptionFlagBits(int64_t value);
string_view_t enum_name_VkSubpassContents(int64_t value);
string_view_t enum_name_VkSubmitFlagBits(int64_t value);
string_view_t enum_name_VkSubgroupFeatureFlagBits(int64_t value);
string_view_t enum_name_VkStructureType(int64_t value);
string_view_t enum_name_VkStencilOp(int64_t value);
string_view_t enum_name_VkStencilFaceFlagBits(int64_t value);
string_view_t enum_name_VkSpirvResourceTypeFlagBitsEXT(int64_t value);
string_view_t enum_name_VkSparseMemoryBindFlagBits(int64_t value);
string_view_t enum_name_VkSparseImageFormatFlagBits(int64_t value);
string_view_t enum_name_VkSharingMode(int64_t value);
string_view_t enum_name_VkShadingRatePaletteEntryNV(int64_t value);
string_view_t enum_name_VkShaderStageFlagBits(int64_t value);
string_view_t enum_name_VkShaderInfoTypeAMD(int64_t value);
string_view_t enum_name_VkShaderGroupShaderKHR(int64_t value);
string_view_t enum_name_VkShaderFloatControlsIndependence(int64_t value);
string_view_t enum_name_VkShaderCreateFlagBitsEXT(int64_t value);
string_view_t enum_name_VkShaderCorePropertiesFlagBitsAMD(int64_t value);
string_view_t enum_name_VkShaderCodeTypeEXT(int64_t value);
string_view_t enum_name_VkSemaphoreWaitFlagBits(int64_t value);
string_view_t enum_name_VkSemaphoreType(int64_t value);
string_view_t enum_name_VkSemaphoreImportFlagBits(int64_t value);
string_view_t enum_name_VkScopeKHR(int64_t value);
string_view_t enum_name_VkSamplerYcbcrRange(int64_t value);
string_view_t enum_name_VkSamplerYcbcrModelConversion(int64_t value);
string_view_t enum_name_VkSamplerReductionMode(int64_t value);
string_view_t enum_name_VkSamplerMipmapMode(int64_t value);
string_view_t enum_name_VkSamplerCreateFlagBits(int64_t value);
string_view_t enum_name_VkSamplerAddressMode(int64_t value);
string_view_t enum_name_VkSampleCountFlagBits(int64_t value);
string_view_t enum_name_VkResult(int64_t value);
string_view_t enum_name_VkResolveModeFlagBits(int64_t value);
string_view_t enum_name_VkResolveImageFlagBitsKHR(int64_t value);
string_view_t enum_name_VkRenderingFlagBits(int64_t value);
string_view_t enum_name_VkRenderingAttachmentFlagBitsKHR(int64_t value);
string_view_t enum_name_VkRenderPassCreateFlagBits(int64_t value);
string_view_t enum_name_VkRayTracingShaderGroupTypeKHR(int64_t value);
string_view_t enum_name_VkRayTracingLssPrimitiveEndCapsModeNV(int64_t value);
string_view_t enum_name_VkRayTracingLssIndexingModeNV(int64_t value);
string_view_t enum_name_VkRayTracingInvocationReorderModeEXT(int64_t value);
string_view_t enum_name_VkRasterizationOrderAMD(int64_t value);
string_view_t enum_name_VkQueueGlobalPriority(int64_t value);
string_view_t enum_name_VkQueueFlagBits(int64_t value);
string_view_t enum_name_VkQueryType(int64_t value);
string_view_t enum_name_VkQueryResultStatusKHR(int64_t value);
string_view_t enum_name_VkQueryResultFlagBits(int64_t value);
string_view_t enum_name_VkQueryPoolSamplingModeINTEL(int64_t value);
string_view_t enum_name_VkQueryPoolCreateFlagBits(int64_t value);
string_view_t enum_name_VkQueryPipelineStatisticFlagBits(int64_t value);
string_view_t enum_name_VkQueryControlFlagBits(int64_t value);
string_view_t enum_name_VkProvokingVertexModeEXT(int64_t value);
string_view_t enum_name_VkPrimitiveTopology(int64_t value);
string_view_t enum_name_VkPresentTimingInfoFlagBitsEXT(int64_t value);
string_view_t enum_name_VkPresentStageFlagBitsEXT(int64_t value);
string_view_t enum_name_VkPresentScalingFlagBitsKHR(int64_t value);
string_view_t enum_name_VkPresentModeKHR(int64_t value);
string_view_t enum_name_VkPresentGravityFlagBitsKHR(int64_t value);
string_view_t enum_name_VkPolygonMode(int64_t value);
string_view_t enum_name_VkPointClippingBehavior(int64_t value);
string_view_t enum_name_VkPipelineStageFlagBits(int64_t value);
string_view_t enum_name_VkPipelineShaderStageCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineRobustnessImageBehavior(int64_t value);
string_view_t enum_name_VkPipelineRobustnessBufferBehavior(int64_t value);
string_view_t enum_name_VkPipelineLayoutCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineExecutableStatisticFormatKHR(int64_t value);
string_view_t enum_name_VkPipelineDepthStencilStateCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineCreationFeedbackFlagBits(int64_t value);
string_view_t enum_name_VkPipelineCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineCompilerControlFlagBitsAMD(int64_t value);
string_view_t enum_name_VkPipelineColorBlendStateCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineCacheHeaderVersion(int64_t value);
string_view_t enum_name_VkPipelineCacheCreateFlagBits(int64_t value);
string_view_t enum_name_VkPipelineBindPoint(int64_t value);
string_view_t enum_name_VkPhysicalDeviceType(int64_t value);
string_view_t enum_name_VkPhysicalDeviceLayeredApiKHR(int64_t value);
string_view_t enum_name_VkPhysicalDeviceDataGraphProcessingEngineTypeARM(int64_t value);
string_view_t enum_name_VkPhysicalDeviceDataGraphOperationTypeARM(int64_t value);
string_view_t enum_name_VkPerformanceValueTypeINTEL(int64_t value);
string_view_t enum_name_VkPerformanceParameterTypeINTEL(int64_t value);
string_view_t enum_name_VkPerformanceOverrideTypeINTEL(int64_t value);
string_view_t enum_name_VkPerformanceCounterUnitKHR(int64_t value);
string_view_t enum_name_VkPerformanceCounterStorageKHR(int64_t value);
string_view_t enum_name_VkPerformanceCounterScopeKHR(int64_t value);
string_view_t enum_name_VkPerformanceCounterDescriptionFlagBitsKHR(int64_t value);
string_view_t enum_name_VkPerformanceConfigurationTypeINTEL(int64_t value);
string_view_t enum_name_VkPeerMemoryFeatureFlagBits(int64_t value);
string_view_t enum_name_VkPastPresentationTimingFlagBitsEXT(int64_t value);
string_view_t enum_name_VkPartitionedAccelerationStructureOpTypeNV(int64_t value);
string_view_t enum_name_VkPartitionedAccelerationStructureInstanceFlagBitsNV(int64_t value);
string_view_t enum_name_VkOutOfBandQueueTypeNV(int64_t value);
string_view_t enum_name_VkOpticalFlowUsageFlagBitsNV(int64_t value);
string_view_t enum_name_VkOpticalFlowSessionCreateFlagBitsNV(int64_t value);
string_view_t enum_name_VkOpticalFlowSessionBindingPointNV(int64_t value);
string_view_t enum_name_VkOpticalFlowPerformanceLevelNV(int64_t value);
string_view_t enum_name_VkOpticalFlowGridSizeFlagBitsNV(int64_t value);
string_view_t enum_name_VkOpticalFlowExecuteFlagBitsNV(int64_t value);
string_view_t enum_name_VkOpacityMicromapSpecialIndexEXT(int64_t value);
string_view_t enum_name_VkOpacityMicromapFormatEXT(int64_t value);
string_view_t enum_name_VkObjectType(int64_t value);
string_view_t enum_name_VkMicromapTypeEXT(int64_t value);
string_view_t enum_name_VkMicromapCreateFlagBitsEXT(int64_t value);
string_view_t enum_name_VkMemoryUnmapFlagBits(int64_t value);
string_view_t enum_name_VkMemoryPropertyFlagBits(int64_t value);
string_view_t enum_name_VkMemoryOverallocationBehaviorAMD(int64_t value);
string_view_t enum_name_VkMemoryMapFlagBits(int64_t value);
string_view_t enum_name_VkMemoryHeapFlagBits(int64_t value);
string_view_t enum_name_VkMemoryAllocateFlagBits(int64_t value);
string_view_t enum_name_VkLogicOp(int64_t value);
string_view_t enum_name_VkLineRasterizationMode(int64_t value);
string_view_t enum_name_VkLayeredDriverUnderlyingApiMSFT(int64_t value);
string_view_t enum_name_VkLayerSettingTypeEXT(int64_t value);
string_view_t enum_name_VkLatencyMarkerNV(int64_t value);
string_view_t enum_name_VkInternalAllocationType(int64_t value);
string_view_t enum_name_VkInstanceCreateFlagBits(int64_t value);
string_view_t enum_name_VkIndirectStateFlagBitsNV(int64_t value);
string_view_t enum_name_VkIndirectExecutionSetInfoTypeEXT(int64_t value);
string_view_t enum_name_VkIndirectCommandsTokenTypeNV(int64_t value);
string_view_t enum_name_VkIndirectCommandsTokenTypeEXT(int64_t value);
string_view_t enum_name_VkIndirectCommandsLayoutUsageFlagBitsNV(int64_t value);
string_view_t enum_name_VkIndirectCommandsLayoutUsageFlagBitsEXT(int64_t value);
string_view_t enum_name_VkIndirectCommandsInputModeFlagBitsEXT(int64_t value);
string_view_t enum_name_VkIndexType(int64_t value);
string_view_t enum_name_VkImageViewType(int64_t value);
string_view_t enum_name_VkImageViewCreateFlagBits(int64_t value);
string_view_t enum_name_VkImageUsageFlagBits(int64_t value);
string_view_t enum_name_VkImageType(int64_t value);
string_view_t enum_name_VkImageTiling(int64_t value);
string_view_t enum_name_VkImageLayout(int64_t value);
string_view_t enum_name_VkImageCreateFlagBits(int64_t value);
string_view_t enum_name_VkImageCompressionFlagBitsEXT(int64_t value);
string_view_t enum_name_VkImageCompressionFixedRateFlagBitsEXT(int64_t value);
string_view_t enum_name_VkImageAspectFlagBits(int64_t value);
string_view_t enum_name_VkHostImageCopyFlagBits(int64_t value);
string_view_t enum_name_VkGraphicsPipelineLibraryFlagBitsEXT(int64_t value);
string_view_t enum_name_VkGeometryTypeKHR(int64_t value);
string_view_t enum_name_VkGeometryInstanceFlagBitsKHR(int64_t value);
string_view_t enum_name_VkGeometryFlagBitsKHR(int64_t value);
string_view_t enum_name_VkFrontFace(int64_t value);
string_view_t enum_name_VkFramebufferCreateFlagBits(int64_t value);
string_view_t enum_name_VkFrameBoundaryFlagBitsEXT(int64_t value);
string_view_t enum_name_VkFragmentShadingRateTypeNV(int64_t value);
string_view_t enum_name_VkFragmentShadingRateNV(int64_t value);
string_view_t enum_name_VkFragmentShadingRateCombinerOpKHR(int64_t value);
string_view_t enum_name_VkFormatFeatureFlagBits(int64_t value);
string_view_t enum_name_VkFormat(int64_t value);
string_view_t enum_name_VkFilter(int64_t value);
string_view_t enum_name_VkFenceImportFlagBits(int64_t value);
string_view_t enum_name_VkFenceCreateFlagBits(int64_t value);
string_view_t enum_name_VkExternalSemaphoreHandleTypeFlagBits(int64_t value);
string_view_t enum_name_VkExternalSemaphoreFeatureFlagBits(int64_t value);
string_view_t enum_name_VkExternalMemoryHandleTypeFlagBitsNV(int64_t value);
string_view_t enum_name_VkExternalMemoryHandleTypeFlagBits(int64_t value);
string_view_t enum_name_VkExternalMemoryFeatureFlagBitsNV(int64_t value);
string_view_t enum_name_VkExternalMemoryFeatureFlagBits(int64_t value);
string_view_t enum_name_VkExternalFenceHandleTypeFlagBits(int64_t value);
string_view_t enum_name_VkExternalFenceFeatureFlagBits(int64_t value);
string_view_t enum_name_VkEventCreateFlagBits(int64_t value);
string_view_t enum_name_VkDynamicState(int64_t value);
string_view_t enum_name_VkDriverId(int64_t value);
string_view_t enum_name_VkDisplaySurfaceStereoTypeNV(int64_t value);
string_view_t enum_name_VkDisplayPowerStateEXT(int64_t value);
string_view_t enum_name_VkDisplayPlaneAlphaFlagBitsKHR(int64_t value);
string_view_t enum_name_VkDisplayEventTypeEXT(int64_t value);
string_view_t enum_name_VkDiscardRectangleModeEXT(int64_t value);
string_view_t enum_name_VkDirectDriverLoadingModeLUNARG(int64_t value);
string_view_t enum_name_VkDeviceQueueCreateFlagBits(int64_t value);
string_view_t enum_name_VkDeviceMemoryReportEventTypeEXT(int64_t value);
string_view_t enum_name_VkDeviceGroupPresentModeFlagBitsKHR(int64_t value);
string_view_t enum_name_VkDeviceFaultVendorBinaryHeaderVersionEXT(int64_t value);
string_view_t enum_name_VkDeviceFaultAddressTypeEXT(int64_t value);
string_view_t enum_name_VkDeviceEventTypeEXT(int64_t value);
string_view_t enum_name_VkDeviceDiagnosticsConfigFlagBitsNV(int64_t value);
string_view_t enum_name_VkDeviceAddressBindingTypeEXT(int64_t value);
string_view_t enum_name_VkDeviceAddressBindingFlagBitsEXT(int64_t value);
string_view_t enum_name_VkDescriptorUpdateTemplateType(int64_t value);
string_view_t enum_name_VkDescriptorType(int64_t value);
string_view_t enum_name_VkDescriptorSetLayoutCreateFlagBits(int64_t value);
string_view_t enum_name_VkDescriptorPoolCreateFlagBits(int64_t value);
string_view_t enum_name_VkDescriptorMappingSourceEXT(int64_t value);
string_view_t enum_name_VkDescriptorBindingFlagBits(int64_t value);
string_view_t enum_name_VkDepthClampModeEXT(int64_t value);
string_view_t enum_name_VkDepthBiasRepresentationEXT(int64_t value);
string_view_t enum_name_VkDependencyFlagBits(int64_t value);
string_view_t enum_name_VkDefaultVertexAttributeValueKHR(int64_t value);
string_view_t enum_name_VkDebugUtilsMessageTypeFlagBitsEXT(int64_t value);
string_view_t enum_name_VkDebugUtilsMessageSeverityFlagBitsEXT(int64_t value);
string_view_t enum_name_VkDebugReportObjectTypeEXT(int64_t value);
string_view_t enum_name_VkDebugReportFlagBitsEXT(int64_t value);
string_view_t enum_name_VkDataGraphPipelineSessionBindPointTypeARM(int64_t value);
string_view_t enum_name_VkDataGraphPipelineSessionBindPointARM(int64_t value);
string_view_t enum_name_VkDataGraphPipelinePropertyARM(int64_t value);
string_view_t enum_name_VkDataGraphModelCacheTypeQCOM(int64_t value);
string_view_t enum_name_VkCullModeFlagBits(int64_t value);
string_view_t enum_name_VkCubicFilterWeightsQCOM(int64_t value);
string_view_t enum_name_VkCoverageReductionModeNV(int64_t value);
string_view_t enum_name_VkCoverageModulationModeNV(int64_t value);
string_view_t enum_name_VkCopyMicromapModeEXT(int64_t value);
string_view_t enum_name_VkCopyAccelerationStructureModeKHR(int64_t value);
string_view_t enum_name_VkCooperativeVectorMatrixLayoutNV(int64_t value);
string_view_t enum_name_VkConservativeRasterizationModeEXT(int64_t value);
string_view_t enum_name_VkConditionalRenderingFlagBitsEXT(int64_t value);
string_view_t enum_name_VkCompositeAlphaFlagBitsKHR(int64_t value);
string_view_t enum_name_VkComponentTypeKHR(int64_t value);
string_view_t enum_name_VkComponentSwizzle(int64_t value);
string_view_t enum_name_VkCompareOp(int64_t value);
string_view_t enum_name_VkCommandPoolResetFlagBits(int64_t value);
string_view_t enum_name_VkCommandPoolCreateFlagBits(int64_t value);
string_view_t enum_name_VkCommandBufferUsageFlagBits(int64_t value);
string_view_t enum_name_VkCommandBufferResetFlagBits(int64_t value);
string_view_t enum_name_VkCommandBufferLevel(int64_t value);
string_view_t enum_name_VkColorSpaceKHR(int64_t value);
string_view_t enum_name_VkColorComponentFlagBits(int64_t value);
string_view_t enum_name_VkCoarseSampleOrderTypeNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureTypeNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureOpTypeNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureOpModeNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureIndexFormatFlagBitsNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureGeometryFlagBitsNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureClusterFlagBitsNV(int64_t value);
string_view_t enum_name_VkClusterAccelerationStructureAddressResolutionFlagBitsNV(int64_t value);
string_view_t enum_name_VkChromaLocation(int64_t value);
string_view_t enum_name_VkBuildMicromapModeEXT(int64_t value);
string_view_t enum_name_VkBuildMicromapFlagBitsEXT(int64_t value);
string_view_t enum_name_VkBuildAccelerationStructureModeKHR(int64_t value);
string_view_t enum_name_VkBuildAccelerationStructureFlagBitsKHR(int64_t value);
string_view_t enum_name_VkBufferUsageFlagBits(int64_t value);
string_view_t enum_name_VkBufferCreateFlagBits(int64_t value);
string_view_t enum_name_VkBorderColor(int64_t value);
string_view_t enum_name_VkBlockMatchWindowCompareModeQCOM(int64_t value);
string_view_t enum_name_VkBlendOverlapEXT(int64_t value);
string_view_t enum_name_VkBlendOp(int64_t value);
string_view_t enum_name_VkBlendFactor(int64_t value);
string_view_t enum_name_VkAttachmentStoreOp(int64_t value);
string_view_t enum_name_VkAttachmentLoadOp(int64_t value);
string_view_t enum_name_VkAttachmentDescriptionFlagBits(int64_t value);
string_view_t enum_name_VkAntiLagStageAMD(int64_t value);
string_view_t enum_name_VkAntiLagModeAMD(int64_t value);
string_view_t enum_name_VkAddressCopyFlagBitsKHR(int64_t value);
string_view_t enum_name_VkAcquireProfilingLockFlagBitsKHR(int64_t value);
string_view_t enum_name_VkAccessFlagBits(int64_t value);
string_view_t enum_name_VkAccelerationStructureTypeKHR(int64_t value);
string_view_t enum_name_VkAccelerationStructureMotionInstanceTypeNV(int64_t value);
string_view_t enum_name_VkAccelerationStructureMemoryRequirementsTypeNV(int64_t value);
string_view_t enum_name_VkAccelerationStructureCreateFlagBitsKHR(int64_t value);
string_view_t enum_name_VkAccelerationStructureCompatibilityKHR(int64_t value);
string_view_t enum_name_VkAccelerationStructureBuildTypeKHR(int64_t value);

} // namespace vulkan_refl


