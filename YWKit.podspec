Pod::Spec.new do |s|
  s.name         = "YWKit"
  s.version      = "0.0.1"
  s.summary      = "YWKit summary"
  s.homepage     = "https://github.com/TimorLeader/YWKit/tree/master"
  s.license      = "MIT"
  s.author             = { "yanwei" => "654811239@qq.com" }
  s.source       = { :git => "https://github.com/TimorLeader/YWKit.git", :tag => "#{s.version}" }
  s.source_files  = "YWKit/YWKit/Source/**/*.{h,m}"
  s.requires_arc = true
  s.ios.deployment_target = '5.0'
  s.frameworks = 'UIKit'
  s.dependency "Masonry", "1.1.0"


# s.resources = ["MGTStatistics/MGTStatistics/**/*.{xib, plist}", "MGTStatistics/MGTStatistics/Resource/**/*.png"]
end
