#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct IReadOnlyDictionary_2_t7C525B2249CC44A031989D4DB72D1792C5161AA1;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B;
// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.TextureId[]
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A;
// UnityEngine.UIElements.VisualElementFocusChangeTarget[]
struct VisualElementFocusChangeTargetU5BU5D_tEBE4BB83BC207523D00483B1C8A731E35EC0F03E;
// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext[]
struct MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5;
// UnityEngine.UIElements.EventDispatcher/DispatchContext[]
struct DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757;
// MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint[]
struct HandlePointU5BU5D_tB7A6B0D4426C52FC5DB0A360E808CFDEAA03EB7C;
// UnityEngine.UIElements.StyleVariableResolver/ResolveContext[]
struct ResolveContextU5BU5D_tA44F71F5EFF2CE305C748D326687E840F314B3FB;
// UnityEngine.UIElements.UIRAtlasAllocator/AreaNode[]
struct AreaNodeU5BU5D_t7ABD91559A1A17A29524B3DC43207BFD9A8A7D37;
// UnityEngine.UIElements.UIRAtlasAllocator/Row[]
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Mono.Net.Security.AsyncProtocolResult
struct AsyncProtocolResult_t9A7197618C6BD851C5A33C65F45B4622C3CF9E05;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme
struct AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.XR.Interaction.Toolkit.ClimbSettings
struct ClimbSettings_t6AB6E4838282F7838D9BAD494527A95D1F0C556F;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme
struct ColorAffordanceTheme_t3F700BEECAFF429ED6996818B1460BE3079943C1;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MixedReality.Toolkit.UX.DialogDismissedEventArgs
struct DialogDismissedEventArgs_tFA78DCFF96544029530814CCEA97D8747A25AAFE;
// System.Exception
struct Exception_t;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme
struct FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC;
// UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset
struct FollowPreset_t26C299AB3359E009F1989E60C9AAC1F24AB897B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.OpenXR.OpenXRAnchorStore
struct OpenXRAnchorStore_t363826BB36CC36DF0FF1EAC93B8EE21EE5D7C5F4;
// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData
struct PokeThresholdData_tC809C4316CFB80EE765C84948E489D6AD09F7546;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t0CE060301D9CE8ABE2ED58836E48CEEF9BD307F6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Microsoft.MixedReality.OpenXR.TrackingMapManager
struct TrackingMapManager_t8BAB474B4A6F9BD82F56F41FDBAD4FB616CA2E23;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme
struct Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme
struct Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme
struct Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D;
// Microsoft.MixedReality.OpenXR.XRAnchorStore
struct XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82;
struct IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___0_value) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// System.Collections.Generic.Stack`1<UnityEngine.Rect>
struct Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId>
struct Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>
struct Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	VisualElementFocusChangeTargetU5BU5D_tEBE4BB83BC207523D00483B1C8A731E35EC0F03E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext>
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	DispatchContextU5BU5D_t23932F8BEADFC827A9CA5636867F6721AD971757* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HandlePointU5BU5D_tB7A6B0D4426C52FC5DB0A360E808CFDEAA03EB7C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleVariableResolver/ResolveContext>
struct Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ResolveContextU5BU5D_tA44F71F5EFF2CE305C748D326687E840F314B3FB* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>
struct Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	AreaNodeU5BU5D_t7ABD91559A1A17A29524B3DC43207BFD9A8A7D37* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>
struct Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D  : public Il2CppComObject
{
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54  : public TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9
{
};

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD  : public TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C
{
};

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB  : public TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82
{
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.AnimationCurve>
struct Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult>
struct Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AsyncProtocolResult_t9A7197618C6BD851C5A33C65F45B4622C3CF9E05* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme>
struct Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AudioAffordanceTheme_t8BF9C6D960CBE2CE7F33C4B4960F794790DD3CCE* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.ClimbSettings>
struct Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ClimbSettings_t6AB6E4838282F7838D9BAD494527A95D1F0C556F* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme>
struct Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ColorAffordanceTheme_t3F700BEECAFF429ED6996818B1460BE3079943C1* ___m_result_22;
};

// System.Threading.Tasks.Task`1<MixedReality.Toolkit.UX.DialogDismissedEventArgs>
struct Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DialogDismissedEventArgs_tFA78DCFF96544029530814CCEA97D8747A25AAFE* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme>
struct Task_1_tC02F453168366AF618556536CBC247D93D242ABB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FloatAffordanceTheme_t8D690D0E9B25A66531A082E48F439E0103EDB7CC* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset>
struct Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FollowPreset_t26C299AB3359E009F1989E60C9AAC1F24AB897B6* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	OpenXRAnchorStore_t363826BB36CC36DF0FF1EAC93B8EE21EE5D7C5F4* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData>
struct Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	PokeThresholdData_tC809C4316CFB80EE765C84948E489D6AD09F7546* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	float ___m_result_22;
};

// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SpeechSynthesisStream_t0CE060301D9CE8ABE2ED58836E48CEEF9BD307F6* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.TrackingMapManager>
struct Task_1_t993E89FA79B507578351A31B13745EDEB07965EF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	TrackingMapManager_t8BAB474B4A6F9BD82F56F41FDBAD4FB616CA2E23* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme>
struct Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Vector2AffordanceTheme_tCB1DE552963E8DEBF132195D98E2A5E44CF6C0F3* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme>
struct Task_1_t796ECEF9EED774001B642F99B717495F31CCD166  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Vector3AffordanceTheme_t634E7949441EB1C9CC97EDBECF62A74698525D6D* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme>
struct Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Vector4AffordanceTheme_tFEBF93156999F1929B8C2D3B30B2AF50864CECAF* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93* ___m_result_22;
};

// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData
struct AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 
{
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData::<stateIndex>k__BackingField
	uint8_t ___U3CstateIndexU3Ek__BackingField_1;
	// System.Byte UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData::<stateTransitionIncrement>k__BackingField
	uint8_t ___U3CstateTransitionIncrementU3Ek__BackingField_2;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AffordanceStateData_t925209B85B56D04F7F178061B1C91280DA6DBC69 ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.Color>
struct Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Guid>
struct Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Guid_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.Quaternion>
struct Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

// Windows.Foundation.AsyncStatus
struct AsyncStatus_t114EA3046F41C449FF4F9D471EB7027D47705E72 
{
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisNormalU3Ek__BackingField_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_5;
};

// Microsoft.MixedReality.OpenXR.SerializationCompletionReason
struct SerializationCompletionReason_tB685B549AD33FA90C9960CBD62EE21D39F01FB95 
{
	// System.Int32 Microsoft.MixedReality.OpenXR.SerializationCompletionReason::value__
	int32_t ___value___2;
};

// Windows.Perception.Spatial.SpatialPerceptionAccessStatus
struct SpatialPerceptionAccessStatus_t6FBFF80605880C4E724AAF9B1EACEBB2F6AE4D63 
{
	// System.Int32 Windows.Perception.Spatial.SpatialPerceptionAccessStatus::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 ___m_result_22;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, uint32_t ___1_progressInfo) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, uint32_t ___1_progressInfo) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// System.Collections.Generic.Stack`1<UnityEngine.Rect>

// System.Collections.Generic.Stack`1<UnityEngine.Rect>

// System.Collections.Generic.Stack`1<System.String>

// System.Collections.Generic.Stack`1<System.String>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext>

// System.Collections.Generic.Stack`1<MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>

// System.Collections.Generic.Stack`1<MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleVariableResolver/ResolveContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleVariableResolver/ResolveContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.__Il2CppComDelegate

// System.__Il2CppComDelegate

// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>

// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>

// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>

// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>

// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<UnityEngine.AnimationCurve>

// System.Threading.Tasks.Task`1<UnityEngine.AnimationCurve>

// System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult>

// System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme>

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.ClimbSettings>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.ClimbSettings>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme>

// System.Threading.Tasks.Task`1<MixedReality.Toolkit.UX.DialogDismissedEventArgs>

// System.Threading.Tasks.Task`1<MixedReality.Toolkit.UX.DialogDismissedEventArgs>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset>

// System.Threading.Tasks.Task`1<UnityEngine.GameObject>

// System.Threading.Tasks.Task`1<UnityEngine.GameObject>

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData>

// System.Threading.Tasks.Task`1<System.Single>

// System.Threading.Tasks.Task`1<System.Single>

// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>

// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>

// System.Threading.Tasks.Task`1<System.IO.Stream>

// System.Threading.Tasks.Task`1<System.IO.Stream>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.TrackingMapManager>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.TrackingMapManager>

// System.Threading.Tasks.Task`1<System.UInt32>

// System.Threading.Tasks.Task`1<System.UInt32>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>

// System.Threading.Tasks.Task`1<UnityEngine.Color>

// System.Threading.Tasks.Task`1<UnityEngine.Color>

// System.Threading.Tasks.Task`1<System.Guid>

// System.Threading.Tasks.Task`1<System.Guid>

// System.Threading.Tasks.Task`1<UnityEngine.Quaternion>

// System.Threading.Tasks.Task`1<UnityEngine.Quaternion>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>

// Windows.Foundation.AsyncStatus

// Windows.Foundation.AsyncStatus

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>

// System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>

// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>

// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>

// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>

// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue);
IL2CPP_EXTERN_C  void AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method);
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_NativeInvoker (Il2CppComObject* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method);
il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m90228BD7EC590080807C5E7F7CA59A8EF35B9AC1_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_mAAB1AD89D7338C3A73271E4BC0757E64DE2C7CEB_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_mCE7A2D0A8DAF2BA898C9B88F6D30393218ABF7BD_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_mE4FADF197D4BE822D0538892876181DD300957D6_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_mFFED84FD8661B05EF2B39E7C361B7E17328D9471_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_gshared (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ___0_handler, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_m878E32594EF72B81B8845AA425E4FB337F343507_gshared (TaskToAsyncInfoAdapter_4_t71625C987C53BD409FB5771D8A03D2782D2B520D* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_gshared (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mC171DB7290D25FD80C9601E867B379DDE1F073EB_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m3355E77DE938672BFA2C8E863C71940C825CD5AE_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3FF07063179C6736C9475D5CC58671346A92C8C5_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m55DA0DC544D63BC6E411938CE43101BB3A6EEAA8_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m0E463051E3EB8BC8739E28DDFE6F25CE051A860A_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2__ctor_m8146E8FC72CAB6D1979978BFD7B5E7529030EC0D_gshared (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mB8F0B8E12C7B028D90DD936B51D8FE3086396A2E_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* ___0_handler, const RuntimeMethod* method) ;
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Progress_m8D81173A97E23F7B4F2836D64C8F2F03C3048772_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m90B4F31967BCE96D8C486240948AB5EC205C5514_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* ___0_handler, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_m592E20BBC9DE3B99B7579D7D0A36E327F065064C_gshared (TaskToAsyncInfoAdapter_4_t65D363DF0417367A5791A3F466AF470834A58CC2* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m890DE99C7F3F64897C5A73F1BB3E1197CC407881_gshared (TaskToAsyncOperationWithProgressAdapter_2_t85CC7C12483530E70260CE9EB34D6A29B19A9B4E* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m0BE85A0CBFB9CFC6C9FA7549A38770BF97EB8084_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m0959AD3A8C74809B424AD91E51AF51D845862D48_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m4B9E347ECB09B56F07157C049762C3CD60CB7BBE_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m6145ABCAB2499D2E66D51B5828CCE6669BAF302B_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m26BB16CA12E7792AF0CC0AF7F19FF0EB1531B306_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF_gshared (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ___0_handler, const RuntimeMethod* method) ;
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Progress_m3D0CAE01D92C283A4F123AA25CEA8E3C0A01D53C_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ___0_handler, const RuntimeMethod* method) ;
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToAsyncInfoAdapter_4_get_Completed_mCEE04D99FA0778BD6CF1BF3B902ADCB41950251A_gshared (TaskToAsyncInfoAdapter_4_t2842729902A63CEC52E74607842CA2E66CDC2D5B* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_gshared (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, const RuntimeMethod* method) ;

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m90228BD7EC590080807C5E7F7CA59A8EF35B9AC1_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_mAAB1AD89D7338C3A73271E4BC0757E64DE2C7CEB_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_mCE7A2D0A8DAF2BA898C9B88F6D30393218ABF7BD_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_mE4FADF197D4BE822D0538892876181DD300957D6_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_mFFED84FD8661B05EF2B39E7C361B7E17328D9471_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
inline void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5 (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ___0_handler, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*, AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_gshared)(__this, ___0_handler, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
inline AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2 (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* (*) (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m878E32594EF72B81B8845AA425E4FB337F343507_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
inline bool TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mC171DB7290D25FD80C9601E867B379DDE1F073EB_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m3355E77DE938672BFA2C8E863C71940C825CD5AE_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m3FF07063179C6736C9475D5CC58671346A92C8C5_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m55DA0DC544D63BC6E411938CE43101BB3A6EEAA8_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m0E463051E3EB8BC8739E28DDFE6F25CE051A860A_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationProgressHandler_2__ctor_mD98227E85B2F57C5936C14B67B1D972ECACF8390 (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationProgressHandler_2__ctor_m8146E8FC72CAB6D1979978BFD7B5E7529030EC0D_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ___0_handler, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mB8F0B8E12C7B028D90DD936B51D8FE3086396A2E_gshared)(__this, ___0_handler, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_m8D81173A97E23F7B4F2836D64C8F2F03C3048772_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ___0_handler, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m90B4F31967BCE96D8C486240948AB5EC205C5514_gshared)(__this, ___0_handler, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149 (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* (*) (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m592E20BBC9DE3B99B7579D7D0A36E327F065064C_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
inline RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_m890DE99C7F3F64897C5A73F1BB3E1197CC407881_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m0BE85A0CBFB9CFC6C9FA7549A38770BF97EB8084_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m0959AD3A8C74809B424AD91E51AF51D845862D48_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_ErrorCode()
inline Exception_t* TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m4B9E347ECB09B56F07157C049762C3CD60CB7BBE_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m6145ABCAB2499D2E66D51B5828CCE6669BAF302B_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m26BB16CA12E7792AF0CC0AF7F19FF0EB1531B306_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ___0_handler, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_gshared)(__this, ___0_handler, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_m3D0CAE01D92C283A4F123AA25CEA8E3C0A01D53C_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7 (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ___0_handler, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_gshared)(__this, ___0_handler, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8 (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* (*) (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_mCEE04D99FA0778BD6CF1BF3B902ADCB41950251A_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
inline uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7 (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_gshared)(__this, method);
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.Rect>
struct Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tEEC1F6968B6388E4800894946805617A2E7EDFDA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<System.String>
struct Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper>, IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IIterable_1_t6A3283089F65FE1C298C4F830A14CD5C2196793A::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IIterable_1_t95EE0FBCA165B86E0554CB35DA8CFA32A530B134::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 5;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D(IIterator_1_tE1E604E7A9EDA024E9D8838EA95E5BCA2D8EF648** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m111BDB2A0B16875B357B2E971863262BB455E97D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65(IIterator_1_t525704805D94594DB030A232D9B0E793B9836E82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m424D1A2AA3DB7A602178F89F11490E933A35CB65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tD770B7BA3385BBF3A1703E386B6006FF670C5094_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId>
struct Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>
struct Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tED2C2A36F6C3F66D1AE3ECC4B99177D661C08F11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext>
struct Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t19851BEF370D35BCE2A6C3848C5148B09113067C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tB7C85692DFAB19C33040C2F5902137C73108A105_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleVariableResolver/ResolveContext>
struct Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t0B236E77382B6037C04F4090B3C6259495694C1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode>
struct Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t38DCE89F38EE7DBFF7ED20EECD0D2616231A9C40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UIElements.UIRAtlasAllocator/Row>
struct Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tB4719B4101F81F7FCCAEDF9ACD1D463D5F52A8D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9
{
	inline TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m31392F72EF6F75F8F86FFB859F03AFE74A61ABC9_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m9EFF9BCDA1108525C98DD678F015E9E7D28FF3E2_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mF14176AA01E3ECBD5B929C74861E186BD77111CB_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m1AB92B4A9230C801564B34A9F91CC596D1F596FA_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6(__thisValue, TaskToAsyncInfoAdapter_4_Close_mC4AF143A40C9684342AB667F45F1F66388D09AC6_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___0_handler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_handler' to managed representation
		AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* ____0_handler_unmarshaled = NULL;
		if (___0_handler != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___0_handler)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____0_handler_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____0_handler_unmarshaled = (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___0_handler, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_RuntimeMethod_var);
				AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F(____0_handler_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____0_handler_unmarshaled, rcw, (void*)AsyncOperationCompletedHandler_1_Invoke_mA3A55B647C5BA005B16B9B3C15EFEE61674893D1_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper::IID, ___0_handler);
			}
		}
		else
		{
			____0_handler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __thisValue = (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*)GetManagedObjectInline();
			TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5(__thisValue, ____0_handler_unmarshaled, TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_mF977CD011959A062CA22E97EC965737D6B43C6C5_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9* __thisValue = (TaskToAsyncInfoAdapter_4_t3403B11966B89B6DC523763E2B1274555DF3B6A9*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m731E382ACBB07675B0B4A1C0C02C3BF6399063F2_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54* __thisValue = (TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD(__thisValue, TaskToAsyncOperationAdapter_1_GetResults_mD55FF7C5C8CE98444C3D6397950939BB749A9EFD_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationAdapter_1_t887B0473B4960A1453C35554C1939F408E2ECE54_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8
{
	inline TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m5013CF376F69735C39B8FD7DDB2D8B36F8DE0DDE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m19F09FBEBA869DFA8BF4A5B667CAFBE0F2C45E80_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m3AD134620238DB2B233EC297129407373E0EB993_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m1F836228E8EE3E16DA8EDD019CD3B9DAD01798BF_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0(__thisValue, TaskToAsyncInfoAdapter_4_Close_m4C42273866C5EB06933AF7EECE843B06037E79E0_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___0_handler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_handler' to managed representation
		AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* ____0_handler_unmarshaled = NULL;
		if (___0_handler != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___0_handler)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____0_handler_unmarshaled = static_cast<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____0_handler_unmarshaled = (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___0_handler, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_RuntimeMethod_var);
				AsyncOperationProgressHandler_2__ctor_mD98227E85B2F57C5936C14B67B1D972ECACF8390(____0_handler_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____0_handler_unmarshaled, rcw, (void*)AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, ___0_handler);
			}
		}
		else
		{
			____0_handler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD(__thisValue, ____0_handler_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m98D19A8FE67890830EB109D3BB8257FCAE76A4AD_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m82F2255467BDE00C392437F5640EECFFC27FFD67_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___0_handler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_handler' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* ____0_handler_unmarshaled = NULL;
		if (___0_handler != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___0_handler)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____0_handler_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____0_handler_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___0_handler, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_RuntimeMethod_var);
				AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F(____0_handler_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____0_handler_unmarshaled, rcw, (void*)AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, ___0_handler);
			}
		}
		else
		{
			____0_handler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC(__thisValue, ____0_handler_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m8EEF680BF51BF4698332EA3A0EC6DA3BE80475EC_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C* __thisValue = (TaskToAsyncInfoAdapter_4_t446235A1F9F2ED49BCC178BF4C36E16650EE1E6C*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_mE8B64676C97829C9C946208210986BEEEF73A149_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_m84DBA18204059D9364921997CB2E88EFB7BAF27A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_t009F1EA12180AC2692DEBA42131E40F8DE709EBD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper>, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C
{
	inline TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_mE6F0BD8858B51D033156D4CF3FA658B3853CF91C_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m99796E32654C1364FBA69D914D62BFA860648515_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m0AD4ECD7D38075C348A7EBF55662A0F9D8D00B4F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mE5C69DE23899878934D02E28872D9C5DA77713B8_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7(__thisValue, TaskToAsyncInfoAdapter_4_Close_m85F1E655EEC814327B3D808659FB77D1A131E3C7_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___0_handler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_handler' to managed representation
		AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* ____0_handler_unmarshaled = NULL;
		if (___0_handler != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___0_handler)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____0_handler_unmarshaled = static_cast<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____0_handler_unmarshaled = (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___0_handler, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_RuntimeMethod_var);
				AsyncOperationProgressHandler_2__ctor_m1BF1E9A619FF77B9CCE37882F351E9E8CD4702EF(____0_handler_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____0_handler_unmarshaled, rcw, (void*)AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, ___0_handler);
			}
		}
		else
		{
			____0_handler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57(__thisValue, ____0_handler_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mE85F1E5B7411C578E004E16AFFFAC8FBF0D53F57_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m63EF6CD6E40D60FC77F5A6B36D252C45A10DA854_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___0_handler) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_handler' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* ____0_handler_unmarshaled = NULL;
		if (___0_handler != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___0_handler)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____0_handler_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____0_handler_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
				RuntimeObject* rcw = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D>(___0_handler, __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
				intptr_t methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_RuntimeMethod_var);
				AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7(____0_handler_unmarshaled, rcw, methodInfo, NULL);
				il2cpp_codegen_set_closed_delegate_invoke(____0_handler_unmarshaled, rcw, (void*)AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_NativeInvoker);
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(rcw), IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, ___0_handler);
			}
		}
		else
		{
			____0_handler_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585(__thisValue, ____0_handler_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m2913D5EACD1C767D0484CCB633051D85C18F5585_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82* __thisValue = (TaskToAsyncInfoAdapter_4_t67EB7D0753DF3A6CD2283E8005D3BED693FD7D82*)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m07D46BDDDF5BDC8621D83A858BA24EF6EBF77EB8_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->___m_target_2;

			if (target != NULL && returnValue->___delegates_13 == NULL && target->klass == __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject*>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB* __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB*)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_mECD7DCC4656BB2C0D017D1D5EEE938300DCC66F7_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_tED2154093BDA3115D0D9B2DF221C8518E6C01EFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2791996B37F0160BF1C9A34EDC6C0822669B4DDE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA57BC7922711FE6BB3738504A2A8E90C90E8857D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t75694119DBB4B68675BB4BAB3E446BA4EE5C91C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t46575E75F710D631831E756B5DE20429700F6B95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t46575E75F710D631831E756B5DE20429700F6B95_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData>
struct Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3077FA9309B642C4BB9224C85B36361FBCE7AFAC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.AnimationCurve>
struct Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0D38DF39F420D2066235DC455550D94A4B92559B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult>
struct Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t7B91A92D06E8BCB69911B6822DD99220DDB735EE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceTheme>
struct Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC575ABA0F34AA66226146D597971487AFDEAEE9D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t824317F4B958F7512E8F7300511752937A6C6043(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t824317F4B958F7512E8F7300511752937A6C6043_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.ClimbSettings>
struct Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t230C4E2FC20CE2E70BAE8498DA3F9C47BF91A68C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.Color>
struct Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0F52B00F589ACC9B1A0B07C99D25B2B3738160F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceTheme>
struct Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tF5BF595556DC7C9594D1A1C16CF2846FCA83F068_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<MixedReality.Toolkit.UX.DialogDismissedEventArgs>
struct Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDF0307F4B25B5D1BB9ED371D6271A8AA76AEA2D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme>
struct Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC02F453168366AF618556536CBC247D93D242ABB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC02F453168366AF618556536CBC247D93D242ABB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPreset>
struct Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEC211AC0F5076543F73AE77281DCF8C94BBA84F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE06D7E45E347567BB7775D8FB00F95DC55D14506_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Guid>
struct Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t22D0B73ACD9F94E511034ABC3E7CADBFC5793865_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t4C228DE57804012969575431CFF12D57C875552D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t4C228DE57804012969575431CFF12D57C875552D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tAD8F84870B338D62A0C1BABBF95A8BEF901CC05D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t47B78FD415AF01796C6CCBE2B602F6736D0E30B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData>
struct Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tADEE7191C2CB8481F66C37D57A30A367C18D6644_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.Quaternion>
struct Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t502F730FACF92117DF4DF20990375F13C9FB46D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9DC4650609C219E0BEBEF42BD4006594D9C5D5BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Single>
struct Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3F973293F4A08007EC4C5AB4BD8F6E22BF728942_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC4941390267731D3CAC5F52A31FD1307711E12D5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC9379B37D3E3B6AF5F74F7D212634EC3355A0C6E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t06484715029D51A4420723456D165BAC63798F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.TrackingMapManager>
struct Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t993E89FA79B507578351A31B13745EDEB07965EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t993E89FA79B507578351A31B13745EDEB07965EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceTheme>
struct Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t4D2AA465151E2AE0869A0E535BBB2F0D24DA398D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceTheme>
struct Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t796ECEF9EED774001B642F99B717495F31CCD166(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t796ECEF9EED774001B642F99B717495F31CCD166_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceTheme>
struct Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t6BC4AF6298C3DC1104A386AE96D9C56D37E763E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper(obj));
}
