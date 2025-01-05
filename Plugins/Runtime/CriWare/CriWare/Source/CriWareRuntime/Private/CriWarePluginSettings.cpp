#include "CriWarePluginSettings.h"

UCriWarePluginSettings::UCriWarePluginSettings() {
    this->bNoExistCriWareIni = false;
    this->ContentDir = TEXT("Sound/Stream");
    this->NumBinders = 16;
    this->MaxBinds = 16;
    this->NumLoaders = 32;
    this->MaxPath = 1024;
    this->OutputsLogFileSystem = false;
    this->PS4_FileAccessThreadAffinityMask = 63;
    this->PS4_DataDecompressionThreadAffinityMask = 63;
    this->PS4_MemoryFileSystemThreadAffinityMask = 63;
    this->PS4_FileAccessThreadPriority = 500;
    this->PS4_DataDecompressionThreadPriority = 730;
    this->PS4_MemoryFileSystemThreadPriority = 720;
    this->AutomaticallyCreateCueAsset = true;
    this->UsesInGamePreview = false;
    this->OutputsLogAtom = false;
    this->MaxVirtualVoices = 32;
    this->NumStandardMemoryVoices = 16;
    this->StandardMemoryVoiceNumChannels = 2;
    this->StandardMemoryVoiceSamplingRate = 192000;
    this->NumStandardStreamingVoices = 8;
    this->StandardStreamingVoiceNumChannels = 2;
    this->StandardStreamingVoiceSamplingRate = 144000;
    this->PoolAtomComponent = false;
    this->AcfFileName = TEXT("/Game/Sound/Config/xrd753");
    this->DistanceFactor = 1.00f;
    this->SoundRendererTypeUI = EAtomSoundRendererType::Hardware1;
    this->SoundRendererType = 1;
    this->EconomicTickMarginDistance = 500.00f;
    this->EconomicTickFrequency = 5;
    this->CullingMarginDistance = 500.00f;
    this->HcaMxVoiceSamplingRate = 48000;
    this->NumHcaMxMemoryVoices = 0;
    this->HcaMxMemoryVoiceNumChannels = 2;
    this->NumHcaMxStreamingVoices = 0;
    this->HcaMxStreamingVoiceNumChannels = 2;
    this->WASAPI_IsExclusive = false;
    this->WASAPI_BitsPerSample = 24;
    this->WASAPI_SamplingRate = 48000;
    this->WASAPI_NumChannels = 6;
    this->PS4_ServerThreadAffinityMask = 63;
    this->PS4_OutputThreadAffinityMask = 63;
    this->PS4_ServerThreadPriority = 400;
    this->PS4_OutputThreadPriority = 300;
    this->PS4_UseAudio3d = false;
    this->PS4_NumberOfAudio3dMemoryVoices = 16;
    this->PS4_SamplingRateOfAudio3dMemoryVoices = 48000;
    this->PS4_NumberOfAudio3dStreamingVoices = 8;
    this->PS4_SamplingRateOfAudio3dStreamingVoices = 48000;
    this->InitializeMana = true;
    this->EnableDecodeSkip = false;
    this->MaxDecoderHandles = 4;
    this->MaxManaBPS = 0;
    this->MaxManaStreams = 1;
    this->UseH264Decoder = false;
    this->bUseManaStartupMovies = false;
    this->bWaitForMoviesToComplete = false;
    this->bMoviesAreSkippable = false;
}


