template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterUnityClass<TextRenderingPrivate::GUIText>(const char*);
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterUnityClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class PerformanceReportingManager; template <> void RegisterUnityClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterUnityClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 85 non stripped classes
	//0. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//1. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//2. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//5. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//6. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//7. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//8. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//9. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//10. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//11. Camera
	RegisterUnityClass<Camera>("Core");
	//12. Light
	RegisterUnityClass<Light>("Core");
	//13. Material
	RegisterUnityClass<Material>("Core");
	//14. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//15. Texture
	RegisterUnityClass<Texture>("Core");
	//16. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//17. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//18. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//19. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//20. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//21. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//22. GameObject
	RegisterUnityClass<GameObject>("Core");
	//23. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//24. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//25. GameManager
	RegisterUnityClass<GameManager>("Core");
	//26. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//27. Renderer
	RegisterUnityClass<Renderer>("Core");
	//28. Shader
	RegisterUnityClass<Shader>("Core");
	//29. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//30. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//31. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//32. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//33. Mesh
	RegisterUnityClass<Mesh>("Core");
	//34. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//35. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//36. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//37. Transform
	RegisterUnityClass<Transform>("Core");
	//38. Sprite
	RegisterUnityClass<Sprite>("Core");
	//39. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//40. Collider
	RegisterUnityClass<Collider>("Physics");
	//41. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//42. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//43. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//44. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//45. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//46. Animation
	RegisterUnityClass<Animation>("Animation");
	//47. Animator
	RegisterUnityClass<Animator>("Animation");
	//48. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//49. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//50. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//51. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//52. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//53. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//54. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//55. TextRenderingPrivate::GUIText
	RegisterUnityClass<TextRenderingPrivate::GUIText>("TextRendering");
	//56. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//57. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//58. TagManager
	RegisterUnityClass<TagManager>("Core");
	//59. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//60. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//61. InputManager
	RegisterUnityClass<InputManager>("Core");
	//62. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//63. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//64. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//65. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//66. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//67. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//68. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//69. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//70. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//71. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//72. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//73. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//74. CloudWebServicesManager
	RegisterUnityClass<CloudWebServicesManager>("CloudWebServices");
	//75. PerformanceReportingManager
	RegisterUnityClass<PerformanceReportingManager>("PerformanceReporting");
	//76. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//77. UnityAnalyticsManager
	RegisterUnityClass<UnityAnalyticsManager>("UnityAnalytics");
	//78. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//79. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//80. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//81. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//82. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//83. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//84. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");

}
