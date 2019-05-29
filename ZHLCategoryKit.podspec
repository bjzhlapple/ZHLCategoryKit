#
# Be sure to run `pod lib lint ZHLCategoryKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZHLCategoryKit'
  s.version          = '0.0.1'
  s.summary          = 'A short description of ZHLCategoryKit.'
  s.description      = <<-DESC
                    "智慧流iOS基础服务分类"
                       DESC

  # s.homepage         = 'https://github.com/shenyangyang@zhihuiliu.com/ZHLCategoryKit'
  s.homepage         = 'https://github.com/bjzhlapple/ZHLCategoryKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'shenyangyang@zhihuiliu.com' => 'shenyangyang@zhihuiliu.com' }
  s.source           = { :git => 'https://github.com/bjzhlapple/ZHLCategoryKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  s.platform     = :ios, "9.0"
  s.ios.deployment_target = '9.0'

  s.source_files = 'ZHLCategoryKit/Classes/**/*'
  s.dependency "MBProgressHUD", "~> 1.1.0"
  s.dependency "Masonry", "~> 1.1.0"
  
  # s.resource_bundles = {
  #   'ZHLCategoryKit' => ['ZHLCategoryKit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
