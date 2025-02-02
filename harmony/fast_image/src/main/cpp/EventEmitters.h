
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterH.js
 */
#pragma once

#include <react/renderer/components/view/ViewEventEmitter.h>
#include <jsi/jsi.h>

namespace facebook {
namespace react {

class JSI_EXPORT FastImageViewEventEmitter : public ViewEventEmitter {
 public:
  using ViewEventEmitter::ViewEventEmitter;

  struct OnLoadStart {
  };

  struct OnProgress {
      int loaded;
      int total;
  };
  struct OnLoad {
      int width;
      int height;
  };

  struct OnError {
  };

  struct OnLoadEnd {
  };

  void onLoadStart(OnLoadStart value) const;
  void onProgress(OnProgress value) const;
  void onLoad(OnLoad value) const;
  void onError(OnError value) const;
  void onLoadEnd(OnLoadEnd value) const;
};

} // namespace react
} // namespace facebook
