Pod::Spec.new do |s|
  s.name         = "XHSinaMenuView"
  s.version      = "1.3"
  s.summary      = "SinaMenuView is pop animation menu inspired by sina weibo app."
  s.homepage     = "https://github.com/xhzengAIB/SinaMenuView"
  s.license      = "MIT"
  s.authors      = { "xhzengAIB" => "xhzengAIB@gmail.com" }
  s.source       = { :git => "https://github.com/xhzengAIB/SinaMenuView.git", :tag => "1.3" }
  s.frameworks   = 'Foundation', 'CoreGraphics', 'UIKit'
  s.platform     = :ios, '7.0'
  s.source_files = 'SinaMenuView/*.{h,m}'
  s.requires_arc = true
  s.dependency 'XHRealTimeBlur'
  s.dependency 'pop'
end
