Pod::Spec.new do |s|
  s.name         = "XHSinaMenuView"
  s.version      = "2.0"
  s.summary      = "PopMenu is pop animation menu inspired by sina weibo / net ease app."
  s.homepage     = "https://github.com/xhzengAIB/PopMenu"
  s.license      = "MIT"
  s.authors      = { "xhzengAIB" => "xhzengAIB@gmail.com" }
  s.source       = { :git => "https://github.com/xhzengAIB/PopMenu.git", :tag => "2.0" }
  s.frameworks   = 'Foundation', 'CoreGraphics', 'UIKit'
  s.platform     = :ios, '6.0'
  s.source_files = 'PopMenu/*.{h,m}'
  s.requires_arc = true
  s.dependency 'XHRealTimeBlur'
  s.dependency 'pop'
end
