# 🎮 重庆工商大学CO科创团队 游戏开发方向

> **面向  重庆工商大学CO科创团队-游戏开发方向 成员的协作知识库与项目中心**

[English](./README.md) | **中文**

---

## 📋 目录

- [关于我们](#关于我们)
- [快速开始](#快速开始)
- [项目结构](#项目结构)
- [参与贡献](#参与贡献)
- [资源库](#资源库)
- [社区](#社区)
- [许可证](#许可证)

---

## 🎯 关于我们

**重庆工商大学CO科创团队 游戏开发方向** 是由倡导学生互助学习的组织，致力于在大学社区内培养游戏开发技能并促进协作。

### 我们的目标

- 🎓 **学习**：提供结构化的游戏开发技术学习路径
- 🤝 **协作**：促进团队项目开发
- 🚀 **创造**：构建并发布完整的游戏项目
- 🌱 **成长**：在支持性环境中培养专业技能

### 核心技术

- **游戏引擎**: Unity
- **编程语言**: C#
- **版本控制**: Git & GitHub
- **协作方式**: 敏捷开发方法

---

## 🚀 快速开始

### 环境准备

在开始之前，请确保安装以下软件：

- [Unity Hub](https://unity.com/download) 与 Unity 编辑器
- [Git](https://git-scm.com/downloads)
- [Visual Studio](https://visualstudio.microsoft.com/) 或 [VS Code](https://code.visualstudio.com/)

### 克隆知识库到本地

使用以下 git 命令克隆知识库  
   
```bash
git clone https://github.com/[你的组织名称]/knowledge-base.git
cd knowledge-base
```

### 不知道什么是 git? 不会使用 git?  
请查阅我们的 [Wiki]() 以快速入门 git的使用!
  
请查阅 Wiki 找到自己感兴趣的内容！或者查阅 docs/tutorials/ 目录下的教程！  


## 📁 项目结构

```text
knowledge-base/
├── docs/                  # 文档文件
│   ├── tutorials/         # 指导手册
│   ├── notes/             # 成员的开发笔记
│   ├── errors-solutions/  # 常见的错误与解决方案
│   └── templates/         # 模板
├── projects/              # 活跃和归档的项目
│   ├── game-jam/          # 限时游戏开发挑战项目
│   ├── long-term/         # 长期开发项目
│   └── prototypes/        # 实验性概念项目
└── resources/             # 共享资源和工具
    ├── scripts/           # 可复用代码片段
    ├── assets/            # 共享游戏资源
    └── plugins/           # 插件
```
  
### docs 文件夹
   
docs 文件夹中包含所有的指导文档和成员的笔记以及常见错误的解决方案, 你可以查看其中的文档，并对你认为不够完善的文档提交 pull request, 经过审核后，我们会对文档内容进行修改  
   
> - **tutorials**: tutorials 文件夹中包含所有的指导文档，内部的文件夹结构会根据不同的板块内容来增添 ，此文件夹内容由 core-teams 成员进行审核维护， 请 All-members 成员提交 pull request 申请修改  
> - **notes**: notes 文件夹用于保存所有成员的笔记，每个人都可以在此文件夹中创建一个自己的文件夹用来存放个人笔记, 请以 "[your github's name]'s notes" 的格式命名。 该文件夹中的内容可供 All-members 成员自主维护个人分支, 在执行 pull request 时，会对其中的内容进行审核， 并依据个人意愿将部分笔记添加整合至 tutorials 文件夹中  
> - **errors-solutions**: errors-solutions 文件夹会记录常见问题的产生原因与解决方案
> - **templates**: templates 文件夹中会包含指导手册，开发笔记，常见的错误与解决方案等的基础模板，如果你不知道如何开始，从模板开始是一个很不错的选择

### projects 文件夹  
  
projects 文件夹用于管理所有开发项目，包括 GameJam 的参赛作品，长期开发项目和实验性质的项目   
  
> -**game-jam**: game-jam 文件夹中包含参加的 GameJam 中的比赛项目，根据个人意愿选择是否提交个人的可执行文件  
> -**long-term**: long-term 文件夹中包含长期开发的公开项目，特点是持续开发、对代码有一定的质量要求，要求有完整的项目文档和开发计划  
> -**prototypes**: prototypes 文件夹属于实验性质的文件夹，用于记录快速开发的原型和技术验证，将会包含对于某种玩法的实现方法的构想、特定游戏机制的解读等    

   
### resources 文件夹  

    
resources 文件夹不同于 docs 文件夹， 此文件夹中很少包含指导性的文件， 主要用于提供可复用的素材及有益于开发的插件， 帮助节省搜集各类资源时的时间和人力开销， 请务必在搜集及使用资源时注意原作者的知识产权

 > -**scripts**: scripts 文件夹包含可复用、可迁移的代码片段，例如：通用工具类、通用对象池、自设计UI框架。  
 > -**assets**: assets 文件夹内包含通用游戏素材，包括但不限于美术资源，音频资源等  
 > -**plugins**: plugins文件夹中包含比较常用的开发插件，同时也可将自主编写的插件分享至此  
  

## 🤝 参与贡献
我们欢迎所有成员的贡献！以下是你可以提供帮助的方式：

报告问题
发现错误或有建议？请提交问题：

清晰描述问题

重现步骤（如适用）

期望与实际行为的对比

添加内容
Fork 本仓库

创建功能分支

bash
git checkout -b feature/你的精彩贡献
进行修改

提交并附上描述性信息

bash
git commit -m "docs: 添加 Unity 动画教程"
推送并创建 Pull Request

贡献指南
遵循我们的 C# 编码规范

使用有意义的提交信息

提交前测试你的更改

修改代码时更新相关文档

## 📚 资源库
学习资料
Unity 学习路径 - 结构化的 Unity 教程

C# 基础 - 编程基础

Git 与协作 - 版本控制工作流

开发工具
工具	用途	链接
Unity	游戏引擎	下载
GitHub Desktop	Git 图形界面	下载
Trello	项目管理	网站
资源素材
Kenney 素材 - 免费游戏资源

OpenGameArt - 社区艺术资源

Freesound - 音频资源

👥 社区
交流渠道
讨论区: GitHub Discussions

实时聊天: [你的QQ群或Discord链接]（请联系获取邀请）

会议安排: 每周同步会议（查看 Wiki）

团队结构
核心团队: 组织领导和项目维护者

项目负责人: 负责具体项目

贡献者: 积极参与开发的成员

成员: 学习和参与的成员

行为准则
我们致力于为所有人提供友好、安全和受欢迎的环境。参与前请阅读我们的 行为准则。

📄 许可证
本项目采用 MIT 许可证 - 详情请见 LICENSE 文件。

所有文档和代码示例均根据 知识共享署名 4.0 国际 许可证发布。

🔗 快速链接
🗓️ 项目路线图

🎓 学习进度

🐛 已知问题

💡 功能请求

<div align="center">
编码愉快！ 🎮

"艺术挑战技术，技术启发艺术。" — John Lasseter

</div>
本 README 由 [你的学校名] 游戏开发组织维护。最后更新: 2024年1月
