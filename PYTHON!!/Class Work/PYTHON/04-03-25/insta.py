import instaloader

username = input("ENTER USERNAME : ")
ig = instaloader.Instaloader()
profile = instaloader.Profile.from_username(ig.context,username)

print("Username : ",profile.username)
print("post : ",profile.mediacount)
print("followers : ",str(profile.followers))
print("following : ",str(profile.followees))
print("bio : ",profile.biography)
instaloader.Instaloader().download_profile(username,profile_pic_only=True)
